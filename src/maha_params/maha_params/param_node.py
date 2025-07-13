import rclpy
from rclpy.node import Node

class ParameterNode(Node):
    def __init__(self):
        super().__init__('simple_param_node')
        #declare a parameter value
        self.declare_parameter('my_param', 'default value')
        #get/read the parameter 'my_param'
        my_param = self.get_parameter('my_param').get_parameter_value().string_value
        self.get_logger().info(f"My param value: {my_param}")

def main():
    rclpy.init()
    node = ParameterNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=='__main__':
    main()