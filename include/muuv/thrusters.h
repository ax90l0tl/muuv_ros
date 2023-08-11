#ifndef THRUSTERS_H
#define THRUSTERS_H

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/transform.hpp"
#include "raspi_dma_pwm/PWM_obj.h"

class Thrusters
{
public:
    Thrusters(int pigpio_id);

private:
    int pi;
};

#endif