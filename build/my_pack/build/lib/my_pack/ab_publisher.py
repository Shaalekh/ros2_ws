import rclpy
from rclpy.node import Node
from customs.msg import AddressBook

class AddressBookClass(Node):
    def __init__(self):
        super().__init__("ab_publisher")
        self.abpub = self.create_publisher(AddressBook, 'arbeit', 10)
        self.get_logger().info("Initialised.")
    
        msg = AddressBook()
        msg.first_name = "Aalekh"
        msg.last_name = "Sharma"
        msg.phone_number = 9643028814
        msg.phone_type = 2
        self.get_logger().info("Before publishing")
        self.abpub.publish(msg)
        self.get_logger().info("After Publishing")



def main():
    rclpy.init()
    node = AddressBookClass()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=='__main__':
    main()