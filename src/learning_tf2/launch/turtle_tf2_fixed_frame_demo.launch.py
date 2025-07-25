from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    return LaunchDescription([
        IncludeLaunchDescription(
            PathJoinSubstitution([
                FindPackageShare('learning_tf2'),
                'launch',
                'turtle_tf2_demo.launch.py'
            ]),
            launch_arguments={'target_frame':'carrot1'}.items(),
        ),
        Node(
            package='learning_tf2',
            executable='fixed_frame_tf2_broadcaster',
            name='fixed_frame_broadcaster'
        )
    ])