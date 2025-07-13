import rclpy
from rclpy.node import Node
from customs.srv import AddThreeInts

class CustomService(Node):
    def __init__(self):
        super().__init__("custom_service")
        self.curser = self.create_service(AddThreeInts, 'add_three_ints', self.add_three_ints_callback)

    def add_three_ints_callback(self, request, response):
        response.sum = request.a + request.b + request.c
        self.get_logger().info("Incoming request: a:%d b:%d c:%d" % (request.a , request.b , request.c))
        return response
    

def main():
    rclpy.init()
    node = CustomService()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=='__main__':
    main()