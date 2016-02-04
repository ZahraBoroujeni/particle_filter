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


#define NUMPARTS 60
#define MAX_RESAMPLED_PARTICLES 55
#define IMWIDTH 31
#define IMHEIGHT 23
#define MAX_COLOR 4
#define MAX_NUM 1

// The basic vector




class particle_filter
{
public:

  ros::NodeHandle priv_nh_;
    std::string serial_port_;
    int baud_rate_;
    std::string result;
    size_t bytes_wrote;
    int debug;
    
    serial::Serial link;

  particle_filter();
  ~particle_fileter();
private:
  struct Particle{
    double v[3];
    uint8_t ch,hits;
    uint16_t bel;
  };

  Particle parts[NUMPARTS];
  int model[MAX_COLOR][MAX_NUM][2] = { 
                                               {{1,1}}, 
                                               {{1,100}},
                                               {{100,1}},
                                               {{100,100}} 
                                             };
  void resample ();
  void initParticles();
  void evalParticle(struct Particle* pt);
  void initParticle(struct Particle* pt);
  void mutateParticle(struct Particle* pt , struct Particle* ptsrc);
  void transform(struct Particle* pt, uint32_t x, uint32_t y, uint8_t* xi, uint8_t* yi);




};

#endif