#include "raspi_dma_pwm.h"
#include <iostream>
using namepace std;

int main(){
    int pi = pigpio_start("192.168.1.55", NULL);
    PWM_obj motor1 = PWM_obj(pi, 17);

    while (true)
    {
        motor1.run(0.1);
    }
    
}