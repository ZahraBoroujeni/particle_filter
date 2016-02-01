
/*
  Arrays
 
 
 created 2012
 
 */
#include <avr/pgmSpace.h>
#include <SoftwareSerial.h>
prog_uchar PROGMEM wave_1[] = {
255, 255, 255, 255, 255, 255, 248, 15, 224, 63, 224, 15, 255, 255, 255, 255, 
224, 63, 192, 3, 255, 192, 15, 248, 15, 240, 7, 255, 128, 31, 255, 128, 
127, 128, 63, 248, 3, 254, 0, 15, 252, 3, 254, 0, 254, 7, 224, 255, 
0, 255, 128, 63, 192, 252, 15, 224, 15, 240, 31, 224, 63, 129, 252, 3, 
252, 7, 240, 247, 240, 63, 192, 63, 1, 248, 52, 252, 15, 240, 31, 3, 
160, 31, 135, 192, 252, 3, 240, 117, 90, 244, 31, 3, 90, 15, 131, 84, 
190, 80, 63, 6, 252, 30, 30, 170, 80, 105, 120, 31, 168, 124, 21, 192, 
165, 210, 248, 29, 96, 248, 107, 69, 42, 16, 248, 61, 80, 241, 15, 131, 
74, 176, 240, 43, 209, 203, 31, 5, 120, 161, 240, 235, 213, 250, 62, 58, 
241, 71, 203, 85, 42, 180, 248, 55, 195, 203, 218, 189, 87, 169, 241, 231, 
135, 150, 181, 90, 143, 81, 224, 60, 131, 57, 66, 168, 84, 143, 128, 113, 
132, 244, 142, 80, 106, 57, 199, 120, 131, 210, 59, 192, 234, 175, 85, 198, 
142, 208, 126, 5, 224, 174, 7, 236, 181, 35, 245, 31, 134, 254, 15, 26, 
148, 63, 129, 126, 14, 204, 185, 52, 18, 223, 195, 232, 127, 185, 60, 36, 
255, 130, 7, 56, 95, 96, 103, 211, 224, 30, 56, 201, 125, 7, 240, 22, 
30, 112, 223, 225, 126, 15, 133, 190, 131, 240, 11, 240, 48, 31, 164, 252, 
31, 255, 129, 192, 112, 30, 1, 255, 15, 225, 126, 129, 220, 127, 128, 0, 
31, 15, 7, 158, 224, 126, 7, 195, 126, 124, 11, 225, 224, 63, 222, 16, 
242, 76, 195, 15, 224, 30, 7, 195, 248, 226, 24, 97, 135, 240, 159, 195, 
224, 0, 67, 255, 79, 128, 63, 3, 225, 253, 150, 128, 31, 248, 127, 195, 
131, 252, 63, 191, 252, 0, 240, 7, 131, 192, 0, 0, 1, 227, 252, 15, 
4, 0, 255, 248, 248, 3, 224, 30, 15, 240, 7, 241, 252, 0, 0, 124, 
7, 128, 3, 255, 240, 15, 3, 227, 31, 255, 255, 225, 255, 255, 135, 255, 
255, 31, 255, 128, 0, 0, 31, 200 // 200 = end of file
};

prog_uchar PROGMEM wave_2[] = {
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 194, 191, 45, 56, 29, 
31, 216, 184, 222, 219, 203, 73, 120, 0, 2, 251, 244, 20, 83, 120, 41, 
9, 111, 98, 167, 67, 35, 254, 183, 81, 120, 180, 94, 110, 68, 230, 255, 
115, 179, 249, 152, 153, 253, 192, 1, 255, 255, 255, 255, 255, 255, 255, 255, 
129, 255, 255, 48, 31, 255, 240, 127, 1, 255, 192, 38, 96, 31, 254, 0, 
31, 224, 77, 210, 37, 222, 32, 31, 228, 27, 164, 107, 252, 64, 29, 98, 
77, 210, 37, 255, 0, 31, 164, 89, 190, 0, 255, 224, 3, 244, 3, 255, 
192, 7, 255, 0, 31, 240, 4, 251, 0, 127, 240, 1, 254, 0, 79, 208, 
5, 255, 128, 31, 224, 65, 251, 64, 191, 208, 3, 247, 131, 247, 168, 2, 
255, 64, 7, 240, 15, 63, 0, 31, 252, 0, 127, 128, 19, 248, 1, 255, 
224, 3, 255, 5, 63, 192, 31, 254, 0, 31, 240, 88, 120, 1, 255, 240, 
0, 253, 64, 7, 194, 23, 239, 0, 15, 245, 2, 245, 2, 255, 192, 1, 
250, 176, 63, 0, 191, 240, 1, 126, 190, 30, 133, 15, 212, 3, 159, 15, 
15, 195, 175, 242, 1, 207, 135, 15, 135, 143, 240, 0, 223, 232, 31, 10, 
223, 240, 0, 255, 240, 60, 26, 255, 192, 7, 255, 7, 195, 255, 252, 0, 
63, 240, 120, 124, 255, 0, 15, 252, 30, 7, 255, 192, 1, 252, 0, 7, 
255, 240, 3, 255, 192, 31, 255, 128, 31, 254, 7, 255, 192, 3, 247, 192, 
127, 248, 0, 127, 248, 1, 255, 128, 0, 63, 0, 255, 240, 0, 31, 192, 
15, 248, 0, 127, 240, 1, 255, 128, 3, 255, 255, 255, 0, 127, 128, 31, 
254, 0, 63, 240, 63, 254, 0, 31, 240, 31, 255, 0, 1, 255, 240, 255, 
240, 0, 31, 255, 255, 252, 0, 31, 255, 128, 0, 0, 7, 255, 192, 0, 
0, 1, 255, 192, 0, 1, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 
255, 255, 255, 240, 0, 127, 240, 1, 255, 224, 200 // 200 = endo of file
};

prog_uchar PROGMEM wave_3[] = {
0, 0, 0, 0, 0, 6, 3, 255, 251, 236, 192, 0, 3, 243, 195, 99, 
127, 255, 255, 255, 255, 223, 192, 127, 224, 63, 224, 254, 0, 126, 71, 97, 
27, 217, 12, 88, 36, 179, 97, 179, 78, 123, 50, 205, 176, 206, 97, 129, 
206, 83, 60, 255, 125, 159, 239, 247, 247, 255, 63, 159, 230, 25, 190, 3, 
57, 207, 243, 57, 185, 128, 25, 25, 129, 153, 152, 255, 243, 57, 153, 166, 
103, 57, 222, 64, 63, 236, 238, 123, 156, 128, 63, 35, 38, 228, 1, 255, 
192, 7, 240, 9, 189, 136, 127, 240, 3, 250, 6, 155, 144, 135, 255, 0, 
31, 240, 18, 110, 70, 63, 252, 0, 63, 128, 27, 51, 16, 127, 225, 1, 
255, 18, 109, 212, 139, 124, 16, 31, 171, 36, 157, 90, 191, 68, 129, 115, 
170, 109, 72, 137, 95, 34, 15, 234, 147, 66, 69, 106, 169, 16, 87, 246, 
219, 82, 42, 85, 80, 162, 189, 164, 150, 178, 85, 234, 160, 45, 85, 109, 
41, 117, 110, 170, 17, 84, 214, 218, 179, 94, 234, 160, 5, 93, 73, 106, 
37, 93, 162, 34, 253, 85, 181, 38, 157, 217, 34, 42, 159, 182, 164, 219, 
187, 36, 69, 83, 38, 148, 186, 167, 85, 81, 42, 173, 181, 38, 221, 217, 
2, 234, 187, 73, 89, 43, 101, 85, 54, 170, 182, 164, 215, 187, 36, 69, 
186, 233, 42, 45, 93, 130, 162, 189, 77, 43, 101, 111, 170, 38, 221, 89, 
82, 109, 221, 178, 42, 187, 182, 228, 215, 187, 164, 137, 118, 218, 146, 46, 
238, 130, 21, 244, 149, 178, 238, 241, 0, 126, 218, 146, 69, 220, 0, 22, 
75, 211, 110, 202, 0, 100, 149, 38, 253, 184, 0, 187, 108, 209, 127, 222, 
0, 21, 255, 32, 47, 253, 68, 72, 59, 126, 204, 3, 255, 254, 128, 63, 
240, 0, 0, 110, 136, 31, 224, 0, 87, 127, 216, 130, 0, 64, 3, 255, 
248, 2, 28, 0, 7, 255, 248, 0, 223, 216, 0, 111, 253, 0, 0, 191, 
254, 0, 0, 0, 248, 3, 63, 192, 1, 3, 253, 144, 63, 255, 255, 255, 
255, 255, 255, 255, 224, 0, 63, 255, 252, 0, 63, 252, 1, 200 // 200 = endo of file
};

prog_uchar PROGMEM wave_4[] = {
3, 129, 255, 255, 
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 
255, 255, 255, 195, 131, 224, 63, 192, 15, 248, 7, 224, 63, 192, 7, 240, 
15, 252, 31, 255, 128, 255, 0, 63, 192, 63, 224, 15, 240, 31, 224, 7, 
248, 7, 248, 3, 252, 3, 248, 1, 254, 1, 254, 0, 255, 1, 254, 0, 
255, 0, 255, 3, 255, 192, 127, 128, 63, 192, 63, 192, 239, 224, 31, 192, 
31, 240, 31, 192, 125, 248, 7, 240, 15, 252, 7, 240, 62, 252, 3, 248, 
7, 252, 3, 248, 30, 254, 3, 248, 3, 252, 3, 248, 15, 126, 1, 252, 
1, 254, 3, 252, 13, 127, 1, 252, 0, 254, 3, 252, 5, 191, 1, 252, 
0, 254, 3, 252, 12, 255, 1, 252, 1, 252, 7, 252, 24, 126, 3, 252, 
3, 240, 15, 248, 33, 248, 31, 240, 31, 128, 253, 3, 135, 224, 127, 128, 
252, 3, 192, 60, 126, 7, 252, 7, 240, 31, 32, 231, 224, 63, 224, 127, 
129, 248, 56, 124, 7, 248, 31, 192, 248, 30, 31, 3, 252, 7, 240, 31, 
14, 31, 0, 254, 3, 224, 60, 62, 31, 0, 252, 3, 224, 28, 120, 126, 
3, 248, 31, 32, 115, 225, 248, 15, 240, 61, 129, 223, 15, 192, 127, 3, 
224, 63, 225, 248, 15, 240, 63, 192, 120, 244, 7, 240, 63, 3, 112, 63, 
3, 252, 15, 192, 28, 112, 3, 252, 63, 129, 248, 102, 7, 248, 63, 128, 
113, 204, 15, 240, 206, 97, 199, 112, 55, 195, 123, 131, 29, 131, 248, 56, 
15, 6, 97, 255, 1, 248, 1, 252, 15, 193, 252, 240, 199, 254, 7, 199, 
224, 127, 1, 240, 3, 159, 131, 254, 1, 252, 0, 127, 0, 127, 1, 248, 
0, 252, 0, 255, 1, 255, 128, 254, 7, 224, 3, 3, 224, 127, 192, 63, 
0, 31, 128, 31, 192, 127, 128, 255, 224, 63, 249, 143, 252, 15, 204, 15, 
224, 15, 0, 15, 255, 7, 225, 225, 248, 31, 192, 63, 255, 252, 15, 240, 
124, 1, 255, 128, 255, 224, 63, 0, 248, 0, 0, 0, 126, 0, 127, 128, 
127, 129, 252, 1, 255, 1, 255, 1, 255, 128, 126, 0, 63, 255, 255, 224, 
63, 128, 15, 192, 0, 0, 63, 224, 63, 255, 255, 255, 255, 248, 7, 240, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 255, 255, 255, 255, 200 // 200 = endo of file
};

#define NUMPARTS 60
#define MAX_RESAMPLED_PARTICLES 55
struct Particle{
  uint8_t x,y;
  int8_t a,b,c,d;
  uint8_t ch,hits;
  uint16_t bel;
};
Particle parts[NUMPARTS];

#define IMWIDTH 31
#define IMHEIGHT 23

prog_uchar PROGMEM model[2][16][9] = { 
"00010000",
"00010000",
"00101000",
"00101000",
"00101000",
"01000100",
"01000100",
"01000100",
"01111100",
"01000100",
"10000010",
"10000010",
"10000010",
"00000000",
"00000000",
"00000000",

"00011000",
"00100100",
"00100100",
"01000000",
"01000000",
"01000000",
"01000000",
"01000000",
"01000000",
"01000000",
"00100100",
"00100100",
"00011000",
"00000000",
"00000000",
"00000000"

};
uint8_t img[24][32];
SoftwareSerial HaViMoLink(2,3);

void initParticles(){
  for (int j = 0; j < NUMPARTS; j++)
    initParticle(parts + j);  
}
void evalParticles(){
  for (int j = 0; j < NUMPARTS; j++)
    evalParticle(parts + j);  
}

void readImage(){
//  Serial.println("Reading..."); 
  do{
    uint8_t s[] = "\xFF\xFE\x01\x00\x00\x01";
    HaViMoLink.write(s,6);
    HaViMoLink.setTimeout(100);
  }while (HaViMoLink.readBytes((char*)img,2)!=2);

  for (int i=0; i<24; i++){
    uint8_t s[] = "\xFF\xFE\x16\x00\x20\x36";
    s[3]=i*2;
    s[5]=(i*2) ^ (0x36);
    HaViMoLink.write(s,6);
    HaViMoLink.setTimeout(100);
    if(HaViMoLink.readBytes((char*)img[i],32)!=32) Serial.println("ERR reading.");
  }
  //send a cap_grid ccommand for the next run
  uint8_t s[] = "\xFF\xFE\x15\x00\x00\x15";// 1C
  HaViMoLink.write(s,6);
}
void printImage() {
  Serial.write("\x1B[0;0H");
  for (int j=0; j<24; j++){
      for (int i=0; i<32; i++){
        uint8_t tmp = img[j][i];
        if ((tmp&15) == 0)
          Serial.print(" ");
        else
          Serial.print(tmp & 15,HEX);
/*          if (tmp < 16)
            Serial.print(" ");
          Serial.print(tmp,HEX);*/
      }
      if (j<23) Serial.println("");
  }
}

void printParts() {
  char s[100];
  Serial.write("\x1B[2J"); 
  int maxbel=0;
  int best=0;
  for (int j=0; j<NUMPARTS; j++){
    if (parts[j].bel > maxbel){
      maxbel = parts[j].bel;
      best=j;
    }
//    if (parts[j].bel < 0) Serial.println("ERROR1");
  }

  for (int j=0; j<NUMPARTS; j++){
    sprintf(s, "\x1B[%d;%dHx", parts[j].y, parts[j].x + 32);
//    sprintf(s, "x(%d) y(%d) bel(%d) hits(%d)\n\r", parts[j].y, parts[j].x*2, parts[j].bel,parts[j].hits);
    Serial.write(s);    
  }
  
//  if (parts[best].bel < 0) Serial.println("ERROR2");
  sprintf(s, "\x1B[%d;%dHM(#%d, %d,%d,%d,%d -> %d)", parts[best].y, parts[best].x + 32, parts[best].ch, parts[best].a, parts[best].b, parts[best].c, parts[best].d, parts[best].bel);
  Serial.write(s);
//  Serial.println(parts[best].bel);
  
  
}

void playwave(prog_uchar* a){
  uint8_t sample = 0;
  do{
    for (int i=0; i<8; i++){
      if (sample & 128) 
        digitalWrite(13, HIGH); 
      else 
        digitalWrite(13, LOW);
      sample <<= 1 ;   
      delayMicroseconds(125);
    } 
    sample=pgm_read_byte(a++);
  }while (sample != 200);
  digitalWrite(13, LOW);
}

extern int __bss_end;
extern void *__brkval;

int get_free_memory()
{
  int free_memory;

  if((int)__brkval == 0)
    free_memory = ((int)&free_memory) - ((int)&__bss_end);
  else
    free_memory = ((int)&free_memory) - ((int)__brkval);

  return free_memory;
}

void setup() {
  HaViMoLink.begin(115200);
  Serial.begin(57600);
  Serial.println("\x1B[2JSTARTING...");
 
//  pinMode(13, OUTPUT);
//  playwave(wave_1);
//  delay(1000);
//  playwave(wave_2);
//  delay(1000);
//  playwave(wave_3);
//  delay(1000);
//  playwave(wave_4);
//  while (1);
  
  initParticles();

/*  parts->x=15;
  parts->y=12;
  parts->a=64;
  parts->b=0;
  parts->c=0;
  parts->d=32;
  parts->ch=0;
*/
  readImage();

/*

  memset(img,0,sizeof(img));
  
  evalParticle(parts); 

  printImage();
*/
/*  readImage();

  evalParticles();
//  printParts();
  resample();
*/

  Serial.println(get_free_memory());

}
  
void loop() {
  readImage();
  evalParticles();
  printImage();
  printParts();
  resample();
}

// transforms a template coordinate into image coordinates
void transform(struct Particle* pt, int16_t x, int16_t y, uint8_t* xi, uint8_t* yi){
  int xi_ = ((pt->a * (x-4) + pt->b * (y-8)) >> 6) + pt->x;
  int yi_ = ((pt->c * (x-4) + pt->d * (y-8)) >> 6) + pt->y;

//  Serial.print(xi_);
//  Serial.print(",");
//  Serial.println(yi_);


  if (xi_ > IMWIDTH) xi_ = IMWIDTH;
  if (yi_ > IMHEIGHT) yi_ = IMHEIGHT;
  if (xi_ < 0) xi_ = 0;
  if (yi_ < 0) yi_ = 0;
  *xi = xi_;
  *yi = yi_;
}


void evalParticle(struct Particle* pt){
  uint16_t sum = 0;
  uint8_t cnt = 0;  
  for (int j = 0; j < 16; j++){
    for (int i = 0; i < 8; i++){
      uint8_t imx,imy;
      transform(pt,i,j,&imx,&imy);
      if ((pgm_read_byte(&model[pt->ch][j][i])=='1') && ((img[imy][imx] & 15)!=1)){
          sum += 5;
//          img[imy][imx] = 0xFF;
      }
      if ((pgm_read_byte(&model[pt->ch][j][i])=='0') && ((img[imy][imx] & 15)==1)){
          sum += 1;
//         img[imy][imx] = 0xFF;
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
  pt->x = random(32);
  pt->y = random(24);
  pt->a = random (64-32,64+32);
  pt->b = random (-32,+32);
  pt->c = random (-32,+32);
  pt->d = random (64-32,64+32);
  pt->ch = random(2);
  pt->bel = 0;
}

void mutateParticle(struct Particle* pt , struct Particle* ptsrc){
  pt->x = ptsrc->x + random(-2,3);
  pt->y = ptsrc->y + random(-2,3);
  pt->a = ptsrc->a + random (-5,6);
  pt->b = ptsrc->b + random (-5,6);
  pt->c = ptsrc->c + random (-5,6);
  pt->d = ptsrc->d + random (-5,6);
  pt->ch = random(2);
  pt->bel = 0;
}

void resample (){
  uint32_t sumBelief = 0;
  for (int j = 0; j < NUMPARTS; j++)
    sumBelief += parts[j].bel;  
  uint32_t sum = 0;
  uint32_t lSum = 0;
  uint32_t ptr = random(sumBelief);
  for (int j = 0; j < NUMPARTS; j++)
  {
    sum += (parts[j].bel) * MAX_RESAMPLED_PARTICLES;// * MAX_RESAMPLED_PARTICLES * 256 / (sumBelief/256);
    parts[j].hits = 0;
    while ((sum > ptr) && (lSum < NUMPARTS))
    {
//      Serial.println(sum);
      lSum++;
      parts[j].hits++;
      ptr += (sumBelief);
    }
  }  
  int d = 0;
  for (int j = 0; j < NUMPARTS; j++)
  {
 /*   if (parts[j].hits == 1)
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
