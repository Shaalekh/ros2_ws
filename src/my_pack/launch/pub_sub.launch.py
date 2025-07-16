from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription ([
        Node(
            package='my_pack',
            executable='publisher',
            name='mera_publu',
            output='screen'
        ),
        Node(
            package='my_pack',
            executable='subscriber',
            name='mera_sublu',
            output='screen'
        )
    ])