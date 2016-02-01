#include "ros/ros.h"
#include <cmath>


#define NUMPARTS 60
#define MAX_RESAMPLED_PARTICLES 55

// The basic vector

struct Particle{
  double v[3];
  uint8_t ch,hits;
  uint16_t bel;
};

Particle parts[NUMPARTS];

#define IMWIDTH 31
#define IMHEIGHT 23
#define MAX_COLOR 4
#define MAX_NUM 1

prog_uchar PROGMEM model[2][16][9] = { 
int model[MAX_COLOR][MAX_NUM][2] = { 
                                               {{1,1}}, 
                                               {{1,100}},
                                               {{100,1}},
                                               {{100,100}} 
                                             };
void initParticles(){
  for (int j = 0; j < NUMPARTS; j++)
    initParticle(parts + j);  
}
void evalParticles(){
  for (int j = 0; j < NUMPARTS; j++)
    evalParticle(parts + j);  
}

void transform(struct Particle* pt, int16_t x, int16_t y, uint8_t* xi, uint8_t* yi){
  int xi_ = cos(pt->theta)*x-sin(pt->theta)*y+ pt->x;
  int yi_ = sin(pt->theta)*x+cos(pt->theta)*y+ pt->y;

//  Serial.print(xi_);
//  Serial.print(",");
//  Serial.println(yi_);


  // if (xi_ > IMWIDTH) xi_ = IMWIDTH;
  // if (yi_ > IMHEIGHT) yi_ = IMHEIGHT;
  // if (xi_ < 0) xi_ = 0;
  // if (yi_ < 0) yi_ = 0;
  *xi = xi_;
  *yi = yi_;
}
void evalParticle(struct Particle* pt){
  uint16_t sum = 0;
  uint8_t cnt = 0; 
  for (int color=0;color < MAX_COLOR; color++) 
  {
    for (int n = 0; n < MAX_NUM; n++)
    {
      uint8_t imx,imy;
      transform(pt,model[color][n][0],model[color][n][1],&imx,&imy);
      for (int object = 0; object < MAX_OBJECT; object++)
      {
        if ((imyx-img[color][object][x]<0.2)&&(imy-img[color][object][y]<0.2)){
          sum += 1;
        else 
          sum += 5;
        //          img[imy][imx] = 0xFF;
      }
      cnt++;
    }  
  }
  
  pt->bel = 256 * cnt / (sum*sum+1);
  
//  if (pt->bel > 200) pt->bel -= 200; else pt->bel = 0; 
  
//  if ((img[pt->y][pt->x] & 15) == 2) pt->bel = 100; else pt->bel=0;
//  pt->bel = (pt->x > 10 && pt->x < 20 && pt->y > 8 && pt->y < 15)?100:0;
}

void initParticle(struct Particle* pt){

  double min_x, max_x, min_y, max_y;
  min_x=0;
  min_y=64;
  min_y=0;
  max_y=128;
  srand48(time(NULL));
  pt->v[0] = min_x + drand48() * (max_x - min_x);
  pt->v[1]= min_y + drand48() * (max_y - min_y);
  pt->v[2] = drand48() * 2 * M_PI - M_PI;
  pt->ch = drand48() * 2;
  pt->bel = 0;
}


int main(int argc, char **argv){


  ros::init(argc,argv,"test_spline");


  while (ros::ok())
  {

  }
  return 0;

}

