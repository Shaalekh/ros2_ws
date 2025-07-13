import rclpy
from rclpy.node import Node
from customs.msg import Num

class CustomSubscriber(Node):
    def __init__(self):
        super().__init__('custom_subscriber')
        self.create_subscription(Num, 'chatter', self.timer_callback, 10)

    def timer_callback(self, msg):
        self.get_logger().info("Received: %d" % msg.num)

def main():
    rclpy.init()
    node = CustomSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()