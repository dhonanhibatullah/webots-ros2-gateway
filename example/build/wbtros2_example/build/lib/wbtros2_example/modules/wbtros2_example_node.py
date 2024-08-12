import rclpy
from rclpy.node import Node
import wbtros2_interface.msg as wbtros2_interface



class ExampleNode(Node):

    def __init__(self) -> None:
        super().__init__('Example_Node')

        try:
            self.declare_parameter('name', rclpy.Parameter.Type.STRING)
            self.declare_parameter('send_to', rclpy.Parameter.Type.STRING)
            self.declare_parameter('receive_from', rclpy.Parameter.Type.STRING)
            self.__node_name__          = self.get_parameter('name').value
            self.__send_to_topic__      = self.get_parameter('send_to').value
            self.__receive_from_topic__ = self.get_parameter('receive_from').value

        except:
            self.get_logger().error('Please run the Webots ROS2 Example via launch with specified parameters')
            self.destroy_node()
            quit()

        self.node_pub = self.create_publisher(
            msg_type    = wbtros2_interface.Wbtros2,
            topic       = self.__send_to_topic__,
            qos_profile = 1000
        )

        self.node_sub = self.create_subscription(
            msg_type    = wbtros2_interface.Wbtros2,
            topic       = self.__receive_from_topic__,
            callback    = self.nodeSubCallback,
            qos_profile = 1000
        )

        self.publish_timer = self.create_timer(
            timer_period_sec    = 0.6,
            callback            = self.timerCallback
        )

        self.message_cnt = 0

    

    def nodeSubCallback(self, msg:wbtros2_interface.Wbtros2) -> None:
        self.get_logger.info(f'[{msg.topic}]: {msg.payload}')



    def timerCallback(self) -> None:
        self.message_cnt += 1
        message         = wbtros2_interface.Wbtros2()
        message.topic   = self.__send_to_topic__
        message.payload = f'Hello from {self.__node_name__} [{self.message_cnt}]'
        self.node_pub.publish(message)