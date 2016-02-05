/*
HaViMo.h

by Dr. Hamid Mobalegh, HaViSys UG (haftungsbeschraenkt)

This library is a free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

The latest version of this library can always be found at
http://www.havisys.com
*/

#ifndef particle_filter_h
#define particle_fileter_h
#include <cmath>
#include <ros/ros.h>



#define NUMPARTS 60
#define MAX_RESAMPLED_PARTICLES 55
#define IMWIDTH 31
#define IMHEIGHT 23
#define MAX_COLOR 4
#define MAX_NUM 1
#define MAX_OBJECT 16

// The basic vector




class particle_filter
{
  uint8_t markers_map[MAX_COLOR][MAX_NUM][2]={{{1,1}},{{1,100}},{{100,1}},{{100,100}}};
  struct Particle
  {
    double v[3];
    uint8_t ch,hits;
    uint16_t bel;
  };
 
  Particle parts[NUMPARTS];

public:
    particle_filter();
  ~particle_filter(){};

  void initParticle(struct Particle* pt);
  void mutateParticle(struct Particle* pt , struct Particle* ptsrc);
  void transform(struct Particle* pt, uint8_t x, uint8_t y, uint8_t* xi, uint8_t* yi);
  void evalParticle(struct Particle* pt,uint32_t image_markers[MAX_OBJECT][3]);
  void resample ();
  void evalParticles(uint32_t image_markers[MAX_OBJECT][3]);
 




};

#endif