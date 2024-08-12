from launch import LaunchDescription
from launch_ros.actions import Node



def generate_launch_description():
    
    ros2mqtt_node = Node(
        package     = 'wbtros2_example',
        executable  = 'ros2mqtt_example',
        name        = 'ROS2MQTT_Node',
        parameters  = [
            {'name' : 'ROS2MQTT Node'},
            {'send_to' : 'test/to_mqtt'},
            {'receive_from': 'test/from_mqtt'}
        ]
    )
    
    mqtt2ros_node = Node(
        package     = 'wbtros2_example',
        executable  = 'mqtt2ros_example',
        name        = 'MQTT2ROS_Node',
        parameters  = [
            {'name' : 'MQTT2ROS Node'},
            {'send_to' : 'test/from_mqtt'},
            {'receive_from': 'test/to_mqtt'}
        ]
    )

    wbtros2_ros2handler_node = Node(
        package     = 'wbtros2_package',
        executable  = 'wbtros2_ros2handler',
        name        = 'WBTROS2_ROS2Handler_Node',
        parameters  = [
            {'from_mqtt_topics': ['test/from_mqtt']},
            {'to_mqtt_topics': ['test/to_mqtt']}
        ]
    )

    return LaunchDescription([
        ros2mqtt_node,
        mqtt2ros_node,
        wbtros2_ros2handler_node
    ])