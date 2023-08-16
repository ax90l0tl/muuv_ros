#include "pigpiod_if2.h"
#include <iostream>
using namespace std;
int main()
{
    int pi = pigpio_start("192.168.1.55", NULL);
    cout << pi << endl;
    return (pi);
}