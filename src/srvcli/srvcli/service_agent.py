import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class AddTwoIntsService(Node):
    def __init__(self):
        super().__init__("add_two_ints_srv")
        self.srv = self.create_service(AddTwoInts, 'add_two_ints', self.service_callback)

    def service_callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f"Incoming request: \n a={request.a}  b={request.b}")
        return response
    
def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=='__main__':
    main()