#include "ros/ros.h"
#include "../include/modbot/motorpublisher.h"

int main(int argc, char* argv[]) {
  // initialise mod_bot node
  ros::init(argc, argv, "mod_bot");
  // create an object for robot steering
  MotorPublisher motor;
  motor.sendCommands();
  return 0;
}