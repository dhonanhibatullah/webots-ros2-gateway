# **webots-ros2-gateway**

A websocket-based MQTT gateway from Webots (Windows) to ROS2 inside a WSL. This provides connection for your Webots world simulation to your ROS2-based robot application. The implementation example can be found in [this repository]().


## **How To Use**

1. This gateway requires [paho-mqtt](https://pypi.org/project/paho-mqtt/) Python module in both your WSL and Windows environment and [Docker Engine](https://docs.docker.com/engine/install/ubuntu/) inside your WSL. Make sure they are properly installed first before proceeding.

2. Build the required Docker image for MQTT broker inside your WSL with:
    ```bash
    # at ./src/
    sudo docker build -t wbtros2-broker-image .
    sudo docker compose up -d
    ```

3. Copy and paste the 2 ROS2 packages ```wbtros2_interface``` and ```wbtros2_package``` to your ROS2 workspace ```src/``` folder and build them with ```colcon build```. Remember to ```source setup/install.bash```.

4. You may implement the gateway directly with ROS2 launch file. The following is an example of creating the gateway Node in your ROS2 launch file.
    ```python
    from launch import LaunchDescription
    from launch_ros.actions import Node
    
    def generate_launch_description():
        
        wbtros2_ros2handler_node = Node(
            package     = 'wbtros2_package',
            executable  = 'wbtros2_ros2handler',
            name        = 'WBTROS2_ROS2Handler_Node',
            parameters  = [
                {'from_mqtt_topics': [
                    'test/from_mqtt_topic1',
                    'test/from_mqtt_topic2'
                ]},
                {'to_mqtt_topics': [
                    'test/to_mqtt_topic1',
                    'test/to_mqtt_topic2'
                ]}
            ]
        )

        return LaunchDescription([
            wbtros2_ros2handler_node
        ])
    ```

    - The ```from_mqtt_topics``` parameter is a list containing topics you want to subscribe from Webots and republish them as ROS2 topics.

    - The ```to_mqtt_topics``` parameter is a list containing topics you want to publish to Webots from existing topics from your ROS2 application.

5. In the Webots side, use ```src/webots_module/wbthandler.py``` file to your Webots controller.

6. Simple implementation on ROS2 can be tried on ```example/wsl_ros2```. Please run:
    ```bash
    cd example
    colcon build
    source install/setup.bash
    ros2 launch wbtros2_example wbtros2_example_launch.py
    ```

7. The full implementation can be seen from [this repository]().