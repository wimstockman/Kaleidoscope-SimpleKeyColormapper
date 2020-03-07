#include "Kaleidoscope-SimpleKeyColormapper.h"
#include "Kaleidoscope.h"
namespace kaleidoscope {
namespace plugin {

byte SimpleKeyColormapper_::row = 255, SimpleKeyColormapper_::col = 255;
bool SimpleKeyColormapper_::cleanupDone = true;
uint8_t SimpleKeyColormapper_::ActiveLayer;

void  SimpleKeyColormapper_::ledeffectlayer1(Key k  ){

for(int i=0;i<64;i++)
{
switch(i/8)
{
	case 0: ::LEDControl.setCrgbAt(i, CRGB(160,0,0));
		break;
	case 1: ::LEDControl.setCrgbAt(i, CRGB(0,160,0));
		break;
	case 2: ::LEDControl.setCrgbAt(i, CRGB(0,70,130));
		break;
	case 3: ::LEDControl.setCrgbAt(i, CRGB(130,100,0));
		break;
	case 4: ::LEDControl.setCrgbAt(i, CRGB(160,0,0));
		break;
	case 5: ::LEDControl.setCrgbAt(i, CRGB(0,160,0));
		break;
	case 6: ::LEDControl.setCrgbAt(i, CRGB(0,70,130));
		break;
	case 7: ::LEDControl.setCrgbAt(i, CRGB(130,100,0));
		break;
}
}


::LEDControl.setCrgbAt(8, CRGB(0,70,130));
::LEDControl.setCrgbAt(4, CRGB(0,70,130));
::LEDControl.setCrgbAt(24, CRGB(0,160,0));
::LEDControl.setCrgbAt(25, CRGB(0,70,130));
::LEDControl.setCrgbAt(32, CRGB(0,70,130));
::LEDControl.setCrgbAt(33, CRGB(130,100,0));
::LEDControl.setCrgbAt(31, CRGB(0,160,0));
::LEDControl.setCrgbAt(27, CRGB(160,0,0));
//::LEDControl.setCrgbAt(R2C7, CRGB(0,70,130));
//::LEDControl.setCrgbAt(R1C1, CRGB(100,70,130));
//::LEDControl.setCrgbAt(R0C0, CRGB(100,70,130));
}

void  SimpleKeyColormapper_::ledeffectlayer2(Key k ){


}

void  SimpleKeyColormapper_::ledeffectlayer3(Key k ) {
}
void  SimpleKeyColormapper_::ledeffectlayer4(Key k ) {


}
void  SimpleKeyColormapper_::ledeffectlayer5(Key k ) {

}
void  SimpleKeyColormapper_::ledeffectlayer6(Key k ) {

}
void  SimpleKeyColormapper_::ledeffectlayer7(Key k ) {

}
void  SimpleKeyColormapper_::ledeffectlayer8(Key k ) {

}

void  SimpleKeyColormapper_::ledeffectlayer9(Key k ) {

}
EventHandlerResult SimpleKeyColormapper_::onSetup(void) {
  return EventHandlerResult::OK;
}
EventHandlerResult SimpleKeyColormapper_::afterEachCycle() {

  ActiveLayer =	Layer.top();
   if (ActiveLayer ==0	){
    if (!cleanupDone) {
      ::LEDControl.set_mode(::LEDControl.get_mode_index());
      cleanupDone = true;
    }
  return EventHandlerResult::OK;
  }


  cleanupDone = false;
  ::LEDControl.set_mode(::LEDControl.get_mode_index());
  Serial.println(ActiveLayer);
      for(auto key_addr : KeyAddr::all()){
	Key k = Layer.lookupOnActiveLayer(key_addr);
      Key layer_key = Layer.getKey(ActiveLayer, key_addr);

      if (k == LockLayer(ActiveLayer)) {
      }

      if (k != layer_key)  { ::LEDControl.refreshAt(key_addr); }
		else {
       		switch(ActiveLayer)
				{
			case 1:	ledeffectlayer1(k);
						break;
			case 2:	ledeffectlayer2(k);
						break;

			case 3:	ledeffectlayer3(k);
						break;
			case 4:	ledeffectlayer4(k);
						break;
			case 5:	ledeffectlayer5(k);
						break;
			case 6:	ledeffectlayer6(k);
						break;
			case 7:	ledeffectlayer7(k);
						break;
			case 8:	ledeffectlayer8(k);
						break;
			case 9:	ledeffectlayer9(k);
						break;
				}
      		 }
    	}
  

  return EventHandlerResult::OK;

}
}
}



  kaleidoscope::plugin::SimpleKeyColormapper_ SimpleKeyColormapper;









