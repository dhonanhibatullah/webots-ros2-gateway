from .modules.mqtt2ros_example_node import *



def main(args=None) -> None:
    rclpy.init()
    node = MQTT2ROSExample()
    node.start()

    rclpy.spin(node)

    node.stop()
    node.destroy_node()
    rclpy.shutdown()



if __name__ == '__main__':
    main()