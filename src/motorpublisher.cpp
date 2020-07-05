#include "../include/modbot/motorpublisher.h"


MotorPublisher::MotorPublisher(){

}

MotorPublisher::~MotorPublisher(){

}



void MotorPublisher::sendCommands(){

    publishVelocity = nodeHandle.advertise <geometry_msgs::Twist> 
                            ("/cmd_vel", 100); 
                            
    ROS_INFO_STREAM("Started the Publisher");
    ros::Rate loop_rate(10);
    while (ros::ok())
    {
    message.linear.x = 0.5;
    message.angular.z = 0.0;
    
    publishVelocity.publish(message);
    ros::spinOnce();
    loop_rate.sleep();
  }

}
