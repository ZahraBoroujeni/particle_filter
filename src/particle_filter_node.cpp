#include <ros/ros.h>
#include "particle_filter.h"
#include <stdio.h>
#include <stdlib.h>

particle_filter PF;


void estimate_position(const havimo_ros::CatArray::ConstPtr& havimo_output)
{
  ROS_INFO("I heard: [%d]", havimo_output[1].sumX);
  uint32_t img_t[MAX_OBJECT][3];
  for (int i;i<sizeof(havimo_output);i++)
  {
    img_t[i][0]=havimo_output[i].sumX/2;
    img_t[i][1]=havimo_output[i].sumY/2;
    img_t[i][2]=havimo_output[i].color/2;
  }
  //img_t=msg->data;
  //PF.evalParticles(img_t);
  
  //PF.resample();
  

}  
int main(int argc, char **argv) 
{
  ros::init(argc, argv, "particle_filter_node");
  ros::NodeHandle nh;

  ros::Subscriber sub = nh.subscribe("img_map", 1000, estimate_position);
  while(ros::ok())
  {
    ros::spinOnce();  
  }
  return 0;
}
