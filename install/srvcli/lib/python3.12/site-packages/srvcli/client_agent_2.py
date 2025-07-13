import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class AddTwoIntsClient(Node):
    def __init__(self):
        super().__init__("client_node")
        self.client = self.create_client(AddTwoInts, 'add_two_ints')
    def wait_for_service(self):
        while not self.client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for service...")
    def send_request(self, a, b):
        self.req = AddTwoInts.Request()
        self.req.a = a
        self.req.b = b
        self.get_logger().info("Sending request...")
        return self.client.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsClient()
    
    node.wait_for_service()
    future = node.send_request(4,5)

    while rclpy.ok():
        rclpy.spin_once(node)
        if future.done():
            try:
                response = future.result()
                node.get_logger().info(f"sum : {response.sum}")
            except Exception as e:
                node.get_logger().error(f"Error: {e}")
            break
    
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()