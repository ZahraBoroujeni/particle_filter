#define NUMPARTS 60
#define MAX_RESAMPLED_PARTICLES 55
struct Particle{
  uint8_t x,y;
  int8_t a,b,c,d;
  uint8_t ch,hits;
  uint16_t bel;
};

Particle parts[NUMPARTS];
