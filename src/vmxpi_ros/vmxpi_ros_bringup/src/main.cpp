#include "TitanDriver_ros_wrapper.h"
#include "navX_ros_wrapper.h"
#include "Cobra_ros.h"
#include "Sharp_ros.h"
#include "Servo_ros.h"
#include "Ultrasonic_ros.h"
#include "IOwd_ros.h"
#include "DI_ros.h"
#include "DO_ros.h"
#include <unistd.h>

int main(int argc, char **argv)
{
   system("/usr/local/frc/bin/frcKillRobot.sh"); //Terminal call to kill the robot manager used for WPILib before running the executable.
   ros::init(argc, argv, "main_node");
  
   ros::AsyncSpinner spinner(4); //Allows callbacks from multiple threads; spins asynchronously using 4 threads
   spinner.start(); //Starts this spinner spinning asynchronously
   
   ros::NodeHandle nh; //Internal reference to the ROS node that the program will use to interact with the ROS system
   VMXPi vmx(true, (uint8_t)50); //Realtime bool and the update rate to use for the VMXPi AHRS/IMU interface, default is 50hz within a valid range of 4-200Hz
    
   /**
    * START CODE HERE
    * 
    * 
    * pls
    * 
    * ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQC6h/8eUM1z6s1kgp61Pk2y4mKdJacwkG50dkgyOKLSmFXvwgCgYVZrwntqWQ/gLu3WG7BvRKjets/Z0n9l28RgawPt0QedTigEn+9dkvRI+9SgPTpgRWuqupn/4cq9eTfhrBcO474nxZMfLj4vTmxVPIRgX2eys3P573g1zIsTxz/SxBhyaBw8l042KadE3zHjsrdjf2oY5RQLt8KlYWjIbo2kMgBbhQmLBFuIfaulblAhI32mXcU+a1uUEWBxAN4vtRuheYYOIlo/QRZox80RciuZeQV5hbJA0qAcp24x+uKZ6T8QkF5WLSuTB9tId7lIb2O7FM1KVvwseQLuZlHJ pi@raspberrypi
    * 
    * quickly losing my mind over here
    * I'm dying
    * ahahhaahhaaha
    * 
    */
   
   ROS_INFO("ROS SHUTDOWN");
   ros::waitForShutdown();
   return 0;
}
