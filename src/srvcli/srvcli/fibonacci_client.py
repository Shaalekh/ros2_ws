import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from custom_action_interfaces.action import Fibonacci

class FibonacciActionClient(Node):
    def __init__(self):
        super().__init__('fibonacci_action_client')
        self._action_client=ActionClient(
            self,
            Fibonacci,
            'fibonacci'
        )
    def send_goal(self, order):
        goal_msg = Fibonacci.Goal()
        goal_msg.order = order
        self.get_logger().info("Dunnoss")
        self._action_client.wait_for_server()
        return self._action_client.send_goal_async(goal_msg)
    
def main(args=None):
    rclpy.init(args=args)
    node = FibonacciActionClient()
    future = node.send_goal(3)
    rclpy.spin_until_future_complete(node, future)

if __name__=='__main__':
    main()