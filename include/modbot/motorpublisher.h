#include "ros/ros.h"
#include "geometry_msgs/Twist.h"


class MotorPublisher {

    public:

    MotorPublisher();

    ~MotorPublisher();
    
    void sendCommands();

    // void recieveCommands();

    private:
    ros::NodeHandle nodeHandle;
    geometry_msgs::Twist message;
    ros::Publisher publishVelocity;
    ros::Subscriber subscribeVelocity;
};