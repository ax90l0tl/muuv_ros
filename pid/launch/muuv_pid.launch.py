"""Launch pid nodes in a component container."""

import launch
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    """Generate launch description with multiple components."""
    container = ComposableNodeContainer(
        name="pid_container",
        namespace="",
        package="rclcpp_components",
        executable="component_container",
        composable_node_descriptions=[
            ComposableNode(
                package="pid_component",
                plugin="Pid_component",
                name="pid_x",
                parameters=[
                    {
                        "ctrl_effort_name": "ctrl_effort_x",
                        "setpoint_name": "setpoint_x",
                        "state_name": "imu_x",
                        "gains.p": 0.0,
                        "gains.i": 0.0,
                        "gains.d": 0.0,
                        "gains.i_max": 0.0,
                        "gains.i_min": 0.0,
                        "antiwindup": True,
                    }
                ],
            ),
            # ComposableNode(
            #     package="pid_component",
            #     plugin="Pid_component",
            #     name="pid_y",
            #     parameters=[
            #         {
            #             "ctrl_effort_name": "ctrl_effort_y",
            #             "setpoint_name": "setpoint_y",
            #             "state_name": "imu_y",
            #             "gains.p": 0.0,
            #             "gains.i": 0.0,
            #             "gains.d": 0.0,
            #             "gains.i_max": 0.0,
            #             "gains.i_min": 0.0,
            #             "antiwindup": True,
            #         }
            #     ],
            # ),
            # ComposableNode(
            #     package="pid_component",
            #     plugin="Pid_component",
            #     name="pid_z",
            #     parameters=[
            #         {
            #             "ctrl_effort_name": "ctrl_effort_z",
            #             "setpoint_name": "setpoint_z",
            #             "state_name": "imu_z",
            #             "gains.p": 0.0,
            #             "gains.i": 0.0,
            #             "gains.d": 0.0,
            #             "gains.i_max": 0.0,
            #             "gains.i_min": 0.0,
            #             "antiwindup": True,
            #         }
            #     ],
            # ),
            ComposableNode(
                package="pid_component",
                plugin="Pid_component",
                name="pid_rx",
                parameters=[
                    {
                        "ctrl_effort_name": "ctrl_effort_rx",
                        "setpoint_name": "setpoint_rx",
                        "state_name": "imu_rx",
                        "gains.p": 0.3,
                        "gains.i": 0.01,
                        "gains.d": 0.002,
                        "gains.i_max": 1.0,
                        "gains.i_min": -1.0,
                        "antiwindup": True,
                    }
                ],
            ),
            ComposableNode(
                package="pid_component",
                plugin="Pid_component",
                name="pid_ry",
                parameters=[
                    {
                        "ctrl_effort_name": "ctrl_effort_ry",
                        "setpoint_name": "setpoint_ry",
                        "state_name": "imu_ry",
                        "gains.p": 0.3,
                        "gains.i": 0.01,
                        "gains.d": 0.002,
                        "gains.i_max": 1.0,
                        "gains.i_min": -1.0,
                        "antiwindup": True,
                    }
                ],
            ),
            ComposableNode(
                package="pid_component",
                plugin="Pid_component",
                name="pid_rz",
                parameters=[
                    {
                        "ctrl_effort_name": "ctrl_effort_rz",
                        "setpoint_name": "setpoint_rz",
                        "state_name": "imu_rz",
                        "gains.p": 0.3,
                        "gains.i": 0.01,
                        "gains.d": 0.002,
                        "gains.i_max": 1.0,
                        "gains.i_min": -1.0,
                        "antiwindup": True,
                    }
                ],
            ),
        ],
        output="screen",
    )

    return launch.LaunchDescription([container])
