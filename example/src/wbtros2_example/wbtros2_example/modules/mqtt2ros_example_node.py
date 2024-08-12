import rclpy
from rclpy.node import Node
import paho.mqtt.client as mqtt



class MQTT2ROSExample(Node):

    def __init__(self) -> None:
        super().__init__('ROS2MQTT_example')

        try:
            self.declare_parameter('name', rclpy.Parameter.Type.STRING)
            self.declare_parameter('send_to', rclpy.Parameter.Type.STRING)
            self.declare_parameter('receive_from', rclpy.Parameter.Type.STRING)
            self.__node_name__          = self.get_parameter('name').value
            self.__send_to_topic__      = self.get_parameter('send_to').value
            self.__receive_from_topic__ = self.get_parameter('receive_from').value

        except:
            self.get_logger().error('Please run MQTT2ROS Example via launch with specified parameters')
            self.destroy_node()
            quit()

        self.__mqtt_protocol__  = mqtt.MQTTv311
        self.__mqtt_transport__ = 'websockets'
        self.__mqtt_ws_path__   = '/mqtt'
        self.__mqtt_address__   = 'localhost'
        self.__mqtt_port__      = 9001

        self.mqtt_client = mqtt.Client(
            callback_api_version    = mqtt.CallbackAPIVersion.VERSION2, 
            protocol                = self.__mqtt_protocol__,
            transport               = self.__mqtt_transport__
        )
        self.mqtt_client.on_connect = self.__on_connect__
        self.mqtt_client.on_message = self.__on_message__
        self.mqtt_client.ws_set_options(path=self.__mqtt_ws_path__)
        self.mqtt_client.connect(self.__mqtt_address__, self.__mqtt_port__)

        self.publish_timer = self.create_timer(
            timer_period_sec    = 0.6,
            callback            = self.timerCallback
        )

        self.message_cnt = 0

    

    def __on_connect__(self, client, userdata, flags, rc, __) -> None:

        if rc == 0:
            self.get_logger().info(f'Successfully connected to "mqtt://{self.__mqtt_address__}:{self.__mqtt_port__}"')
            self.mqtt_client.subscribe(self.__receive_from_topic__)

        else:
            self.get_logger().error(f'Failed to connect to "mqtt://{self.__mqtt_address__}:{self.__mqtt_port__}"')
            self.destroy_node()
            quit()



    def __on_message__(self, client, userdata, msg) -> None:
        self.get_logger().info(f'[{msg.topic}]: {str(msg.payload.decode())}')



    def timerCallback(self) -> None:
        self.message_cnt += 1
        self.mqtt_client.publish(
            self.__send_to_topic__, 
            f'Hello from {self.__node_name__} [{self.message_cnt}]'
        )


    
    def start(self) -> None:
        self.mqtt_client.loop_start()



    def stop(self) -> None:
        self.mqtt_client.loop_stop()
        self.mqtt_client.disconnect()