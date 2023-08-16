#include "sensors.hpp"

using std::placeholders::_1;

Sensors::Sensors() : rclcpp::Node("sensors"), count_(0)
{
    imu_pub = this->create_publisher<geometry_msgs::msg::Transform>("imu_data", 10);
    timer_ = this->create_wall_timer(500ms, std::bind(&Sensors::timer_Callback, this));
    pi = pigpio_start("192.168.1.55", NULL);
    cout << pi << endl;   
    imu = new MTi(pi);
    if (imu->detect(1000))
    {
        imu->configureOutputs();
        imu->goToMeasurement();
    }
    else
    {
        RCLCPP_INFO(this->get_logger(), "IMU not detected!");
    }
    //   // pi = pigpio_id;
}

Sensors::~Sensors()
{
    RCLCPP_INFO(this->get_logger(), "Destructing");
    imu->~MTi();
    delete imu;
}

void Sensors::timer_Callback()
{
    auto msg = geometry_msgs::msg::Transform();
    // imu->printData();
    msg.translation.x = imu->getAcceleration()[0];
    msg.translation.y = imu->getAcceleration()[1];
    msg.translation.z = imu->getAcceleration()[2];
    msg.rotation.x = imu->getQuat()[0];
    msg.rotation.y = imu->getQuat()[1];
    msg.rotation.z = imu->getQuat()[2];
    msg.rotation.w = imu->getQuat()[3];
    imu_pub->publish(msg);
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Sensors>());
    rclcpp::shutdown();
    return 0;
}