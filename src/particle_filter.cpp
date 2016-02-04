
void  particle_filter::particle_filter()
{
  for (int j = 0; j < NUMPARTS; j++)
    initParticle(parts + j); 

}

void particle_filter::initParticle(struct Particle* pt){

  double min_x, max_x, min_y, max_y;
  min_x=0;
  min_y=64;
  min_y=0;
  max_y=128;
  srand48(time(NULL));
  pt->v[0] = min_x + drand48()*(max_x - min_x);
  pt->v[1]= min_y + drand48()*(max_y - min_y);
  pt->v[2] = drand48()*2 * M_PI) - M_PI;
  pt->ch = drand48()*2;
  pt->bel = 0;
}

void particle_filter::evalParticles(){
  for (int j = 0; j < NUMPARTS; j++)
    evalParticle(parts + j);  
}



void particle_filter::evalParticle(struct Particle* pt,uint32_t image_x,uint32_t )
{
  uint16_t sum = 0;
  uint8_t cnt = 0; 
  for (int color=0;color < MAX_COLOR; color++) 
  {
    for (int n = 0; n < MAX_NUM; n++)
    {
      uint8_t imx,imy;
      transform(pt,image_x,image_y,&imx,&imy);
      for (int object = 0; object < MAX_OBJECT; object++)
      {
        if ((imyx-img[color][object][x]<0.2)&&(imy-img[color][object][y]<0.2))
          sum += 1;
        else 
          sum += 5;
        //          img[imy][imx] = 0xFF;
      }
      cnt++;
    }  
  }
  
  pt->bel = 256 * cnt / (sum*sum+1);
}

void particle_filter::transform(struct Particle* pt, uint32_t x, uint32_t y, double* xi, double* yi){
  int xi_ = cos(pt->theta)*x-sin(pt->theta)*y+ pt->x;
  int yi_ = sin(pt->theta)*x+cos(pt->theta)*y+ pt->y;

  // if (xi_ > IMWIDTH) xi_ = IMWIDTH;
  // if (yi_ > IMHEIGHT) yi_ = IMHEIGHT;
  // if (xi_ < 0) xi_ = 0;
  // if (yi_ < 0) yi_ = 0;
  *xi = xi_;
  *yi = yi_;
}



void particle_filter::resample (){
  srand48(time(NULL));
  uint32_t sumBelief = 0;
  for (int j = 0; j < NUMPARTS; j++)
    sumBelief += parts[j].bel;  
  uint32_t sum = 0;
  uint32_t lSum = 0;
  uint32_t ptr = irand48(sumBelief);
  for (int j = 0; j < NUMPARTS; j++)
  {
    sum += (parts[j].bel) * MAX_RESAMPLED_PARTICLES;// * MAX_RESAMPLED_PARTICLES * 256 / (sumBelief/256);
    parts[j].hits = 0;
    while ((sum > ptr) && (lSum < NUMPARTS))
    {
      //Serial.println(sum);
      lSum++;
      parts[j].hits++;
      ptr += (sumBelief);
    }
  }  
  int d = 0;
  for (int j = 0; j < NUMPARTS; j++)
  {
    /*if (parts[j].hits == 1)
    {
      mutateParticle(parts+j, parts+j);
    }*/
    while (parts[j].hits > 1)
    {
      while (parts[d].hits != 0)
      {
        d++;
      }
      mutateParticle(parts+d, parts+j);
      parts[d].hits++;
      parts[j].hits--;
    }
  }
  for (int j = (d+1); j < NUMPARTS; j++)
  {
    if (parts[j].hits == 0)
    {
      initParticle(parts + j);
      parts[j].hits = 1;
    }
  }
}
void particle_filter::mutateParticle(struct Particle* pt , struct Particle* ptsrc){
  pt->x = ptsrc->x -2 + drand48()*5; 
  pt->y = ptsrc->y -2 + drand48()*5; 
  pt->ch = drand48()*2; 
  pt->bel = 0;
}




