#include "Kaleidoscope-SimpleKeyColormapper.h"
#include "LEDUtils.h"
#include "Kaleidoscope.h"
#include "layers.h"

byte SimpleKeyColormapper_::row = 255, SimpleKeyColormapper_::col = 255;
bool SimpleKeyColormapper_::cleanupDone = true;
uint8_t SimpleKeyColormapper_::ActiveLayer;

void  SimpleKeyColormapper_::ledeffectlayer1(uint8_t r,uint8_t c,Key k  ){

if((r==2 && c==14 )  || (r==3 && c==7 )  || (r==3 && c==8 ) ){LEDControl.setCrgbAt(r, c, CRGB(237,28,36));}
if((r==2 && c==7 ) ){LEDControl.setCrgbAt(r, c, CRGB(255,242,0));}
if((r==1 && c==8 ) ){LEDControl.setCrgbAt(r, c, CRGB(245,130,32));}
if((r==0 && c==15 )  || (r==2 && c==9 ) ){LEDControl.setCrgbAt(r, c, CRGB(255,255,255));}
if((r==0 && c==14 )  || (r==1 && c==15 )  || (r==2 && c==15 )  || (r==3 && c==12 )  || (r==3 && c==13 )  || (r==3 && c==14 )  || (r==3 && c==15 ) ){LEDControl.setCrgbAt(r, c, CRGB(255,251,204));}
if((r==0 && c==11 )  || (r==0 && c==12 )  || (r==0 && c==13 )  || (r==1 && c==7 )  || (r==1 && c==11 )  || (r==1 && c==12 )  || (r==1 && c==13 )  || (r==2 && c==11 )  || (r==2 && c==12 )  || (r==2 && c==13 )  || (r==3 && c==11 ) ){LEDControl.setCrgbAt(r, c, CRGB(0,166,93));}
if((r==0 && c==7 )  || (r==0 && c==8 ) ){LEDControl.setCrgbAt(r, c, CRGB(0,182,189));}
if((r==3 && c==6 )  || (r==3 && c==9 ) ){LEDControl.setCrgbAt(r, c, CRGB(57,10,93));}
if((r==0 && c==6 )  || (r==0 && c==9 )  || (r==1 && c==6 )  || (r==1 && c==9 )  || (r==1 && c==14 )  || (r==2 && c==6 )  || (r==2 && c==8 ) ){LEDControl.setCrgbAt(r, c, CRGB(114,191,68));}

}

void  SimpleKeyColormapper_::ledeffectlayer2(uint8_t r,uint8_t c, Key k ){

if((r==3 && c==7 )  || (r==3 && c==8 ) ){LEDControl.setCrgbAt(r, c, CRGB(237,28,36));}
if((r==1 && c==2 )  || (r==2 && c==1 )  || (r==2 && c==2 )  || (r==2 && c==3 ) ){LEDControl.setCrgbAt(r, c, CRGB(0,0,255));}
if((r==2 && c==7 ) ){LEDControl.setCrgbAt(r, c, CRGB(255,242,0));}
if((r==1 && c==8 ) ){LEDControl.setCrgbAt(r, c, CRGB(245,130,32));}
if((r==2 && c==9 ) ){LEDControl.setCrgbAt(r, c, CRGB(255,255,255));}
if((r==1 && c==7 ) ){LEDControl.setCrgbAt(r, c, CRGB(0,166,93));}
if((r==0 && c==0 )  || (r==0 && c==1 )  || (r==0 && c==2 )  || (r==0 && c==3 )  || (r==0 && c==4 )  || (r==0 && c==5 )  || (r==0 && c==6 )  || (r==0 && c==7 )  || (r==0 && c==8 )  || (r==0 && c==10 )  || (r==0 && c==11 )  || (r==0 && c==12 )  || (r==0 && c==13 )  || (r==0 && c==14 )  || (r==0 && c==15 )  || (r==1 && c==0 )  || (r==1 && c==1 )  || (r==1 && c==3 )  || (r==1 && c==4 )  || (r==1 && c==5 )  || (r==1 && c==6 )  || (r==1 && c==11 )  || (r==1 && c==13 )  || (r==1 && c==14 )  || (r==1 && c==15 )  || (r==2 && c==0 )  || (r==2 && c==4 )  || (r==2 && c==5 )  || (r==2 && c==6 )  || (r==2 && c==14 )  || (r==2 && c==15 )  || (r==3 && c==0 )  || (r==3 && c==5 )  || (r==3 && c==6 )  || (r==3 && c==9 )  || (r==3 && c==14 )  || (r==3 && c==15 ) ){LEDControl.setCrgbAt(r, c, CRGB(0,182,189));}
if((r==0 && c==9 )  || (r==1 && c==9 )  || (r==1 && c==10 )  || (r==3 && c==11 )  || (r==3 && c==12 )  || (r==3 && c==13 ) ){LEDControl.setCrgbAt(r, c, CRGB(200,0,0));}
if((r==1 && c==12 )  || (r==2 && c==11 )  || (r==2 && c==12 )  || (r==2 && c==13 )  || (r==3 && c==1 )  || (r==3 && c==2 )  || (r==3 && c==3 )  || (r==3 && c==4 ) ){LEDControl.setCrgbAt(r, c, CRGB(0,250,0));}
if((r==2 && c==8 ) ){LEDControl.setCrgbAt(r, c, CRGB(114,191,68));}

}

void  SimpleKeyColormapper_::ledeffectlayer3(uint8_t r,uint8_t c ,Key k ) {

if((r==1 && c==9 ) ){LEDControl.setCrgbAt(r, c, CRGB(0,0,0));}
if((r==0 && c==0 )  || (r==0 && c==1 )  || (r==0 && c==2 )  || (r==0 && c==3 )  || (r==0 && c==4 )  || (r==0 && c==5 )  || (r==0 && c==6 )  || (r==0 && c==9 )  || (r==0 && c==10 )  || (r==0 && c==11 )  || (r==0 && c==12 )  || (r==0 && c==13 )  || (r==0 && c==14 )  || (r==1 && c==0 )  || (r==1 && c==1 )  || (r==1 && c==2 )  || (r==1 && c==3 )  || (r==1 && c==4 )  || (r==1 && c==5 )  || (r==1 && c==6 )  || (r==1 && c==10 )  || (r==1 && c==11 )  || (r==1 && c==12 )  || (r==1 && c==13 )  || (r==1 && c==14 )  || (r==1 && c==15 )  || (r==2 && c==0 )  || (r==2 && c==1 )  || (r==2 && c==2 )  || (r==2 && c==3 )  || (r==2 && c==4 )  || (r==2 && c==5 )  || (r==2 && c==10 )  || (r==2 && c==11 )  || (r==2 && c==12 )  || (r==2 && c==13 )  || (r==2 && c==14 )  || (r==2 && c==15 )  || (r==3 && c==0 )  || (r==3 && c==1 )  || (r==3 && c==2 )  || (r==3 && c==3 )  || (r==3 && c==4 )  || (r==3 && c==5 )  || (r==3 && c==10 )  || (r==3 && c==11 )  || (r==3 && c==12 )  || (r==3 && c==13 )  || (r==3 && c==14 )  || (r==3 && c==15 ) ){LEDControl.setCrgbAt(r, c, CRGB(186,19,26));}
if((r==0 && c==15 )  || (r==2 && c==9 ) ){LEDControl.setCrgbAt(r, c, CRGB(0,0,0));}

}

void  SimpleKeyColormapper_::ledeffectlayer4(uint8_t r,uint8_t c ,Key k ) {

}
void  SimpleKeyColormapper_::ledeffectlayer5(uint8_t r,uint8_t c ,Key k ) {

}
void  SimpleKeyColormapper_::ledeffectlayer6(uint8_t r,uint8_t c ,Key k ) {

}
void  SimpleKeyColormapper_::ledeffectlayer7(uint8_t r,uint8_t c ,Key k ) {

}
void  SimpleKeyColormapper_::ledeffectlayer8(uint8_t r,uint8_t c ,Key k ) {

}

void  SimpleKeyColormapper_::ledeffectlayer9(uint8_t r,uint8_t c ,Key k ) {

}
void SimpleKeyColormapper_::begin(void) {
  Kaleidoscope.useLoopHook(loopHook);
}
void SimpleKeyColormapper_::loopHook(bool postClear) {
  if (!postClear)
    return;

  ActiveLayer =	Layer.top();
   if (ActiveLayer ==0	){
    if (!cleanupDone) {
      LEDControl.set_mode(LEDControl.get_mode_index());
      cleanupDone = true;
    }
    return;
  }


  cleanupDone = false;
  LEDControl.set_mode(LEDControl.get_mode_index());
  Serial.println(ActiveLayer);
  for (uint8_t r = 0; r < ROWS; r++) {
    for (uint8_t c = 0; c < COLS; c++) {
      Key k = Layer.lookupOnActiveLayer(r, c);
      Key layer_key = Layer.getKey(ActiveLayer, r, c);

      if (k == LockLayer(ActiveLayer)) {
        row  = r;
        col = c;
      }

      if (k != layer_key)  { LEDControl.refreshAt(r, c); }
		else {
       		switch(ActiveLayer)
				{
			case 1:	ledeffectlayer1(r,c,k);
						break;
			case 2:	ledeffectlayer2(r,c,k);
						break;

			case 3:	ledeffectlayer3(r,c,k);
						break;
				}
      		 }
    	}
  }

  if (row > ROWS || col > COLS)
    return;

}




  SimpleKeyColormapper_ SimpleKeyColormapper;




