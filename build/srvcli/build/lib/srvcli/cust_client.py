import rclpy
from rclpy.node import Node
from customs.srv import AddThreeInts

class CustomClient(Node):
    def __init__(self):
        super().__init__("custom_service")
        self.cuscli = self.create_service(AddThreeInts, 'add_three_ints')

    def wait_for_service(self):
        while not self.cuscli.wait_for_service(1.0):
            self.get_logger().info("Waiting for service...")
        self.get_logger().info("Service is now available.")
        self.req = AddThreeInts.Request()

    def send_request(self, a, b, c):
        self.req.a = a
        self.req.b = b
        self.req.c = c
        self.get_logger().info("Prepared request with a: %d  b: %d  c: %d" % (self.req.a, self.req.b , self.req.c))
        self.future = self.cuscli.call_async(self.req)

def main():
    rclpy.init()
    node = CustomClient()

    while rclpy.ok():
        rclpy.spin_once(node)
        if node.future.done():
            try:
                response = node.future.result()
            except Exception as e:
                node.get_logger().error("Error: Service call failed %r" % (e,))
            else:
                node.get_logger().info('Sum of a: %d, b: %d, c: %d is %d' % (node.req.a, node.req.b, node.req.c, response.sum))
            break

        node.destroy_node()
        rclpy.shutdown()

if __name__=='__main__':
    main()