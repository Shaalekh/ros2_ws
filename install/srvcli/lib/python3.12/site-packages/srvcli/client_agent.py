import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class AddTwoIntsClient(Node):
    def __init__(self):
        super().__init__("add_two_ints_cli")
        self.cli = self.create_client(AddTwoInts, 'add_two_ints')
        while not self.cli.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Service....")
        self.request = AddTwoInts.Request()
        self.request.a = 7
        self.request.b = 8

        self.future = self.cli.call_async(self.request)

def main(args= None):
    rclpy.init(args=args)
    node=AddTwoIntsClient()
    while rclpy.ok():
        rclpy.spin_once(node)
        if node.future.done():
            try:
                reponse = node.future.result()
                node.get_logger().info(f"Sum is {reponse.sum}")
            except Exception as e:
                node.get_logger().error(f"Service call failed: {e}")
            break
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()