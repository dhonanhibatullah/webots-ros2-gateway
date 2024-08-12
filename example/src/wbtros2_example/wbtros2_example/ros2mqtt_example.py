from .modules.ros2mqtt_example_node import *



def main(args=None) -> None:
    rclpy.init()
    node = ROS2MQTTExample()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()



if __name__ == '__main__':
    main()