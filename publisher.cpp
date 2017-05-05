#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv)
{
ros::init(argc, argv, "talker");
ros::NodeHandle nh;


ros::Publisher command_pub = n.advertise<std_msgs::String>("command", 1000);
ros::Rate loop_rate(10);

while (ros::ok())
{

std_msgs::String msg;
std::stringstream ss;

ss << cin(msg);
msg.data = ss.str();

 ROS_INFO("%s", msg.data.c_str());//keep this line if you want to print the data which is being sent

command_pub.publish(msg);
ros::spinOnce();
loop_rate.sleep();
}
return 0;
}
