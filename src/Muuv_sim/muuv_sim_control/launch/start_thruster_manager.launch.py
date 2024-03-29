import os
import sys

from launch import LaunchDescription
from launch.actions.declare_launch_argument import DeclareLaunchArgument
from launch_ros.actions import Node, PushRosNamespace
from launch.actions.opaque_function import OpaqueFunction
from launch.substitutions import LaunchConfiguration as LC
from launch.actions import GroupAction

import launch
import launch.actions

from ament_index_python.packages import get_package_share_directory

bool_aliases = [1, '1', "True", "true"]

def launch_setup(context, *args, **kwargs):

    tam_reset_arg = {"output_dir": LC("output_dir").perform(context)} if (LC("reset_tam").perform(context) in bool_aliases) else LC("tam_config").perform(context)
    thrust_manager_node = Node(
        name="thruster_allocator",
        package="uuv_thruster_manager",
        executable="thruster_allocator.py",
        output="screen",
        parameters=[LC("config_file").perform(context), tam_reset_arg],
        remappings=[("tf", "/tf")])

    group = GroupAction([
        PushRosNamespace("muuv_sim"),
        thrust_manager_node
        ])

    return [group]

def generate_launch_description():

    ld = launch.LaunchDescription([
        DeclareLaunchArgument("namespace", default_value="muuv_sim"),
        DeclareLaunchArgument("reset_tam", default_value="False"),
        DeclareLaunchArgument("config_file", default_value=os.path.join(get_package_share_directory("muuv_sim_control"), "config", "thruster_manager.yaml")),
        DeclareLaunchArgument("tam_config", default_value=os.path.join(get_package_share_directory("muuv_sim_control"), "config", "TAM.yaml")),
        DeclareLaunchArgument("output_dir", default_value=os.path.join(get_package_share_directory("muuv_sim_control"), "config")),
        OpaqueFunction(function=launch_setup)
    ])

    return ld


if __name__ == '__main__':
    generate_launch_description()