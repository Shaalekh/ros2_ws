import rclpy
from rclpy.node import Node

class TimerParamNode(Node):
    def __init__(self):
        super().__init__('param_timer_node')
        from rcl_interfaces.msg import ParameterDescriptor
        self.descriptor = ParameterDescriptor(description= 'This is my parameter')
        self.parrot = self.declare_parameter('parrot', 'default value', self.descriptor)
        self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        my_parrot = self.get_parameter('parrot').get_parameter_value().string_value
        self.get_logger().info(f'Value: {my_parrot}')

def main():
    rclpy.init()
    node = TimerParamNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=='__main__':
    main()