import rclpy
from rclpy.node import Node
from customs.msg import Num

class CustomPublisher(Node):
    def __init__(self):
        super().__init__('custom_publisher')
        self.get_logger().info("Publisher is initiated...")
        self.custoub = self.create_publisher(Num, 'chatter', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        msg = Num()
        msg.num = 64
        self.custoub.publish(msg)
        self.get_logger().info("Publishing: %d" % msg.num)

def main():
    rclpy.init()
    node = CustomPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
