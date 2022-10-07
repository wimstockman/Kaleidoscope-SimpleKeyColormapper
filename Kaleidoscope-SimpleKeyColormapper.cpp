#include "Kaleidoscope-SimpleKeyColormapper.h"
#include "Kaleidoscope.h"
namespace kaleidoscope {
namespace plugin {

bool SimpleKeyColormapper_::cleanupDone = true;
uint8_t SimpleKeyColormapper_::ActiveLayer;

void  SimpleKeyColormapper_::ledeffectlayer1(){

::LEDControl.setCrgbAt(24, CRGB(114,191,68));
::LEDControl.setCrgbAt(25, CRGB(114,191,68));
::LEDControl.setCrgbAt(26, CRGB(114,191,68));
::LEDControl.setCrgbAt(27, CRGB(0,182,189));
::LEDControl.setCrgbAt(28, CRGB(0,166,93));
::LEDControl.setCrgbAt(29, CRGB(255,242,0));
::LEDControl.setCrgbAt(30, CRGB(237,28,36));
::LEDControl.setCrgbAt(31, CRGB(57,10,93));
::LEDControl.setCrgbAt(32, CRGB(57,10,93));
::LEDControl.setCrgbAt(33, CRGB(237,28,36));
::LEDControl.setCrgbAt(34, CRGB(114,191,68));
::LEDControl.setCrgbAt(35, CRGB(245,130,32));
::LEDControl.setCrgbAt(36, CRGB(0,182,189));
::LEDControl.setCrgbAt(37, CRGB(0,0,0));
::LEDControl.setCrgbAt(38, CRGB(114,191,68));
::LEDControl.setCrgbAt(39, CRGB(255,255,255));
::LEDControl.setCrgbAt(44, CRGB(0,166,93));
::LEDControl.setCrgbAt(45, CRGB(0,166,93));
::LEDControl.setCrgbAt(46, CRGB(0,166,93));
::LEDControl.setCrgbAt(47, CRGB(0,166,93));
::LEDControl.setCrgbAt(48, CRGB(255,251,204));
::LEDControl.setCrgbAt(49, CRGB(0,166,93));
::LEDControl.setCrgbAt(50, CRGB(0,166,93));
::LEDControl.setCrgbAt(51, CRGB(0,166,93));
::LEDControl.setCrgbAt(52, CRGB(0,166,93));
::LEDControl.setCrgbAt(53, CRGB(0,166,93));
::LEDControl.setCrgbAt(54, CRGB(0,166,93));
::LEDControl.setCrgbAt(55, CRGB(57,10,93));
::LEDControl.setCrgbAt(56, CRGB(255,128,0));
::LEDControl.setCrgbAt(57, CRGB(237,28,36));
::LEDControl.setCrgbAt(58, CRGB(114,191,68));
::LEDControl.setCrgbAt(59, CRGB(85,48,141));
::LEDControl.setCrgbAt(60, CRGB(85,48,141));
::LEDControl.setCrgbAt(61, CRGB(255,251,204));
::LEDControl.setCrgbAt(62, CRGB(255,251,204));
::LEDControl.setCrgbAt(63, CRGB(255,251,204));

}
void  SimpleKeyColormapper_::ledeffectlayer2(){

::LEDControl.setCrgbAt(0, CRGB(200,0,0));
::LEDControl.setCrgbAt(1, CRGB(200,0,0));
::LEDControl.setCrgbAt(2, CRGB(200,0,0));
::LEDControl.setCrgbAt(3, CRGB(200,0,0));
::LEDControl.setCrgbAt(4, CRGB(0,182,189));
::LEDControl.setCrgbAt(5, CRGB(0,182,189));
::LEDControl.setCrgbAt(6, CRGB(0,182,189));
::LEDControl.setCrgbAt(7, CRGB(0,250,0));
::LEDControl.setCrgbAt(8, CRGB(0,250,0));
::LEDControl.setCrgbAt(9, CRGB(0,0,255));
::LEDControl.setCrgbAt(10, CRGB(0,182,189));
::LEDControl.setCrgbAt(11, CRGB(0,182,189));
::LEDControl.setCrgbAt(12, CRGB(0,182,189));
::LEDControl.setCrgbAt(13, CRGB(0,0,255));
::LEDControl.setCrgbAt(14, CRGB(0,0,255));
::LEDControl.setCrgbAt(15, CRGB(0,250,0));
::LEDControl.setCrgbAt(16, CRGB(0,250,0));
::LEDControl.setCrgbAt(17, CRGB(0,0,255));
::LEDControl.setCrgbAt(18, CRGB(0,182,189));
::LEDControl.setCrgbAt(19, CRGB(0,182,189));
::LEDControl.setCrgbAt(20, CRGB(0,182,189));
::LEDControl.setCrgbAt(21, CRGB(0,0,255));
::LEDControl.setCrgbAt(22, CRGB(0,0,255));
::LEDControl.setCrgbAt(23, CRGB(0,182,189));
::LEDControl.setCrgbAt(24, CRGB(0,182,189));
::LEDControl.setCrgbAt(25, CRGB(0,182,189));
::LEDControl.setCrgbAt(26, CRGB(0,182,189));
::LEDControl.setCrgbAt(27, CRGB(0,182,189));
::LEDControl.setCrgbAt(28, CRGB(0,166,93));
::LEDControl.setCrgbAt(29, CRGB(255,242,0));
::LEDControl.setCrgbAt(30, CRGB(227,28,237));
::LEDControl.setCrgbAt(31, CRGB(0,182,189));
::LEDControl.setCrgbAt(32, CRGB(0,182,189));
::LEDControl.setCrgbAt(33, CRGB(227,28,237));
::LEDControl.setCrgbAt(34, CRGB(114,191,68));
::LEDControl.setCrgbAt(35, CRGB(245,130,32));
::LEDControl.setCrgbAt(36, CRGB(0,182,189));
::LEDControl.setCrgbAt(37, CRGB(0,0,0));
::LEDControl.setCrgbAt(38, CRGB(200,0,0));
::LEDControl.setCrgbAt(39, CRGB(255,255,255));
::LEDControl.setCrgbAt(41, CRGB(245,130,32));
::LEDControl.setCrgbAt(42, CRGB(245,130,32));
::LEDControl.setCrgbAt(43, CRGB(0,182,189));
::LEDControl.setCrgbAt(44, CRGB(0,182,189));
::LEDControl.setCrgbAt(45, CRGB(255,242,0));
::LEDControl.setCrgbAt(46, CRGB(0,250,0));
::LEDControl.setCrgbAt(47, CRGB(200,0,0));
::LEDControl.setCrgbAt(48, CRGB(200,0,0));
::LEDControl.setCrgbAt(49, CRGB(0,250,0));
::LEDControl.setCrgbAt(50, CRGB(0,250,0));
::LEDControl.setCrgbAt(51, CRGB(0,182,189));
::LEDControl.setCrgbAt(52, CRGB(0,182,189));
::LEDControl.setCrgbAt(53, CRGB(255,242,0));
::LEDControl.setCrgbAt(54, CRGB(0,250,0));
::LEDControl.setCrgbAt(55, CRGB(200,0,0));
::LEDControl.setCrgbAt(56, CRGB(0,182,189));
::LEDControl.setCrgbAt(57, CRGB(0,182,189));
::LEDControl.setCrgbAt(58, CRGB(0,182,189));
::LEDControl.setCrgbAt(59, CRGB(0,182,189));
::LEDControl.setCrgbAt(60, CRGB(0,182,189));
::LEDControl.setCrgbAt(61, CRGB(0,182,189));
::LEDControl.setCrgbAt(62, CRGB(0,182,189));
::LEDControl.setCrgbAt(63, CRGB(0,182,189));

}
void  SimpleKeyColormapper_::ledeffectlayer3(){

::LEDControl.setCrgbAt(0, CRGB(200,0,0));
::LEDControl.setCrgbAt(1, CRGB(200,0,0));
::LEDControl.setCrgbAt(2, CRGB(200,0,0));
::LEDControl.setCrgbAt(3, CRGB(200,0,0));
::LEDControl.setCrgbAt(4, CRGB(0,182,189));
::LEDControl.setCrgbAt(5, CRGB(0,182,189));
::LEDControl.setCrgbAt(6, CRGB(0,182,189));
::LEDControl.setCrgbAt(7, CRGB(0,250,0));
::LEDControl.setCrgbAt(8, CRGB(0,250,0));
::LEDControl.setCrgbAt(9, CRGB(0,0,255));
::LEDControl.setCrgbAt(10, CRGB(0,182,189));
::LEDControl.setCrgbAt(11, CRGB(0,182,189));
::LEDControl.setCrgbAt(12, CRGB(0,182,189));
::LEDControl.setCrgbAt(13, CRGB(0,0,255));
::LEDControl.setCrgbAt(14, CRGB(0,0,255));
::LEDControl.setCrgbAt(15, CRGB(0,250,0));
::LEDControl.setCrgbAt(16, CRGB(0,250,0));
::LEDControl.setCrgbAt(17, CRGB(0,0,255));
::LEDControl.setCrgbAt(18, CRGB(0,182,189));
::LEDControl.setCrgbAt(19, CRGB(0,182,189));
::LEDControl.setCrgbAt(20, CRGB(0,182,189));
::LEDControl.setCrgbAt(21, CRGB(0,0,255));
::LEDControl.setCrgbAt(22, CRGB(0,0,255));
::LEDControl.setCrgbAt(23, CRGB(0,182,189));
::LEDControl.setCrgbAt(24, CRGB(0,182,189));
::LEDControl.setCrgbAt(25, CRGB(0,182,189));
::LEDControl.setCrgbAt(26, CRGB(0,182,189));
::LEDControl.setCrgbAt(27, CRGB(0,182,189));
::LEDControl.setCrgbAt(28, CRGB(0,166,93));
::LEDControl.setCrgbAt(29, CRGB(255,242,0));
::LEDControl.setCrgbAt(30, CRGB(237,28,36));
::LEDControl.setCrgbAt(31, CRGB(0,182,189));
::LEDControl.setCrgbAt(32, CRGB(0,182,189));
::LEDControl.setCrgbAt(33, CRGB(237,28,36));
::LEDControl.setCrgbAt(34, CRGB(114,191,68));
::LEDControl.setCrgbAt(35, CRGB(245,130,32));
::LEDControl.setCrgbAt(36, CRGB(0,182,189));
::LEDControl.setCrgbAt(37, CRGB(0,0,0));
::LEDControl.setCrgbAt(38, CRGB(200,0,0));
::LEDControl.setCrgbAt(39, CRGB(255,255,255));
::LEDControl.setCrgbAt(42, CRGB(200,0,0));
::LEDControl.setCrgbAt(43, CRGB(0,182,189));
::LEDControl.setCrgbAt(44, CRGB(0,182,189));
::LEDControl.setCrgbAt(45, CRGB(0,182,189));
::LEDControl.setCrgbAt(46, CRGB(255,242,0));
::LEDControl.setCrgbAt(47, CRGB(200,0,0));
::LEDControl.setCrgbAt(48, CRGB(200,0,0));
::LEDControl.setCrgbAt(49, CRGB(255,242,0));
::LEDControl.setCrgbAt(50, CRGB(255,242,0));
::LEDControl.setCrgbAt(51, CRGB(0,182,189));
::LEDControl.setCrgbAt(52, CRGB(0,182,189));
::LEDControl.setCrgbAt(53, CRGB(0,182,189));
::LEDControl.setCrgbAt(54, CRGB(255,242,0));
::LEDControl.setCrgbAt(55, CRGB(200,0,0));
::LEDControl.setCrgbAt(56, CRGB(0,182,189));
::LEDControl.setCrgbAt(57, CRGB(0,182,189));
::LEDControl.setCrgbAt(58, CRGB(0,182,189));
::LEDControl.setCrgbAt(59, CRGB(0,182,189));
::LEDControl.setCrgbAt(60, CRGB(0,182,189));
::LEDControl.setCrgbAt(61, CRGB(0,182,189));
::LEDControl.setCrgbAt(62, CRGB(0,182,189));
::LEDControl.setCrgbAt(63, CRGB(0,182,189));

}
void  SimpleKeyColormapper_::ledeffectlayer4(){

::LEDControl.setCrgbAt(3, CRGB(201,33,30));
::LEDControl.setCrgbAt(4, CRGB(255,242,0));
::LEDControl.setCrgbAt(5, CRGB(255,242,0));
::LEDControl.setCrgbAt(6, CRGB(255,242,0));
::LEDControl.setCrgbAt(7, CRGB(255,242,0));
::LEDControl.setCrgbAt(8, CRGB(255,242,0));
::LEDControl.setCrgbAt(9, CRGB(255,242,0));
::LEDControl.setCrgbAt(10, CRGB(255,242,0));
::LEDControl.setCrgbAt(11, CRGB(255,242,0));
::LEDControl.setCrgbAt(12, CRGB(255,242,0));
::LEDControl.setCrgbAt(13, CRGB(255,242,0));
::LEDControl.setCrgbAt(14, CRGB(255,242,0));
::LEDControl.setCrgbAt(15, CRGB(255,242,0));
::LEDControl.setCrgbAt(16, CRGB(255,242,0));
::LEDControl.setCrgbAt(17, CRGB(255,242,0));
::LEDControl.setCrgbAt(18, CRGB(255,242,0));
::LEDControl.setCrgbAt(19, CRGB(255,242,0));
::LEDControl.setCrgbAt(20, CRGB(255,242,0));
::LEDControl.setCrgbAt(21, CRGB(255,242,0));
::LEDControl.setCrgbAt(22, CRGB(255,242,0));
::LEDControl.setCrgbAt(23, CRGB(255,242,0));
::LEDControl.setCrgbAt(26, CRGB(255,242,0));
::LEDControl.setCrgbAt(31, CRGB(57,10,93));
::LEDControl.setCrgbAt(32, CRGB(57,10,93));
::LEDControl.setCrgbAt(37, CRGB(0,0,0));
::LEDControl.setCrgbAt(39, CRGB(0,182,189));
::LEDControl.setCrgbAt(40, CRGB(255,242,0));
::LEDControl.setCrgbAt(41, CRGB(255,242,0));
::LEDControl.setCrgbAt(42, CRGB(255,242,0));
::LEDControl.setCrgbAt(43, CRGB(255,242,0));
::LEDControl.setCrgbAt(44, CRGB(255,242,0));
::LEDControl.setCrgbAt(45, CRGB(255,242,0));
::LEDControl.setCrgbAt(46, CRGB(255,242,0));
::LEDControl.setCrgbAt(47, CRGB(255,242,0));
::LEDControl.setCrgbAt(48, CRGB(255,242,0));
::LEDControl.setCrgbAt(49, CRGB(255,242,0));
::LEDControl.setCrgbAt(50, CRGB(255,242,0));
::LEDControl.setCrgbAt(51, CRGB(255,242,0));
::LEDControl.setCrgbAt(52, CRGB(255,242,0));
::LEDControl.setCrgbAt(53, CRGB(255,242,0));
::LEDControl.setCrgbAt(54, CRGB(255,242,0));
::LEDControl.setCrgbAt(55, CRGB(255,242,0));
::LEDControl.setCrgbAt(56, CRGB(255,242,0));
::LEDControl.setCrgbAt(57, CRGB(255,242,0));
::LEDControl.setCrgbAt(58, CRGB(255,242,0));
::LEDControl.setCrgbAt(59, CRGB(255,242,0));
::LEDControl.setCrgbAt(60, CRGB(85,48,141));
::LEDControl.setCrgbAt(61, CRGB(255,242,0));
::LEDControl.setCrgbAt(62, CRGB(255,242,0));
::LEDControl.setCrgbAt(63, CRGB(255,242,0));

}
void  SimpleKeyColormapper_::ledeffectlayer5(){

}
void  SimpleKeyColormapper_::ledeffectlayer6(){

}
void  SimpleKeyColormapper_::ledeffectlayer7(){

}
void  SimpleKeyColormapper_::ledeffectlayer8(){

}
void  SimpleKeyColormapper_::ledeffectlayer9(){

}
EventHandlerResult SimpleKeyColormapper_::onSetup(void) {
  return EventHandlerResult::OK;
}
EventHandlerResult SimpleKeyColormapper_::afterEachCycle() {

  ActiveLayer =	Layer.mostRecent();
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
			case 1:	ledeffectlayer1();
						break;
			case 2:	ledeffectlayer2();
						break;

			case 3:	ledeffectlayer3();
						break;
			case 4:	ledeffectlayer4();
						break;
			case 5:	ledeffectlayer5();
						break;
			case 6:	ledeffectlayer6();
						break;
			case 7:	ledeffectlayer7();
						break;
			case 8:	ledeffectlayer8();
						break;
			case 9:	ledeffectlayer9();
						break;
				}
      		 }
    	}
  

  return EventHandlerResult::OK;

}
}
}



  kaleidoscope::plugin::SimpleKeyColormapper_ SimpleKeyColormapper;










