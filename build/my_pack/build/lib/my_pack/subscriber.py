import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__("subscriber")
        self.get_logger().info("Subscriber is initialised")
        self.create_subscription(String, 'convo', self.subscriber_talkback , 10)
        self.count = 0
    def subscriber_talkback(self, msg):
        self.get_logger().info(f"#{self.count}: Heard: {msg.data}")
        self.count += 1
def main(args=None):
    rclpy.init(args=args)
    node = MinimalSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()