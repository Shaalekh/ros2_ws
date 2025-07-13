import rclpy
from rclpy.node import Node

from std_msgs.msg import String

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__("publisher")
        self.get_logger().info("Publisher initialised.")
        self.count = 0
        self.publisher = self.create_publisher(String, 'convo', 10)
        self.timer = self.create_timer(1.0, self.publisher_callback)
    
    def publisher_callback(self):
        msg = String()
        msg.data = "Hello from the pubs"
        self.publisher.publish(msg)
        self.get_logger().info(f"#{self.count}: Message is published")
        self.count += 1
        
def main(args=None):
    rclpy.init(args=args)
    node = MinimalPublisher()
    node.publisher_callback()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main_':
    main()