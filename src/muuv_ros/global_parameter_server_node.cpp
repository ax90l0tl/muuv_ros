#include "rclcpp/rclcpp.hpp"
#include "pigpiod_if2.h"

class GlobalParameterServer : public rclcpp::Node
{
public:
    GlobalParameterServer() : Node("global_parameter_server",
                                   rclcpp::NodeOptions()
                                       .allow_undeclared_parameters(true)
                                       .automatically_declare_parameters_from_overrides(true))
    {
        auto param_desc = rcl_interfaces::msg::ParameterDescriptor{};
        param_desc.description = "Pigpio_id from running pigpio_start()";

        // int pi = pigpio_start("192.168.1.55", NULL);
        // this->declare_parameter("pigpio_id", pi, param_desc);
    }

private:
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<GlobalParameterServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}