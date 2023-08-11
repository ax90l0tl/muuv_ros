#include "muuv/thrusters.h"

Thrusters::Thrusters(int pigpio_id){
    pi = pigpio_id;
    PWM_obj motor = PWM_obj(pi, 17);
}

int main(int argc, char * argv[])
{
  return 0;
}