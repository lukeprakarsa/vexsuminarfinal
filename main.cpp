#include <iostream>
#include 

using namespace std;
using namespace pros;

namespace PortConstants
{
    int BACK_LEFT = 1;
    int FRONT_LEFT = 2;
    int BACK_RIGHT = 3;
    int FRONT_RIGHT = 4;
}

Motor backLeft (BACK_LEFT, E_MOTOR_GEARSET_18, E_MOTOR_ENCODER_COUNTS);
