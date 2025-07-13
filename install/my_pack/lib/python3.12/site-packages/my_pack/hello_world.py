#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
class HelloWorldNode(Node):
    def __init__(self):
        super().__init__("hello_word")
        self.get_logger().info("Hello")
        
def main():
    rclpy.init()
    node = HelloWorldNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=="__main__":
    main()
