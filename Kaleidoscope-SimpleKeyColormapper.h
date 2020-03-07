#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-Macros.h"
namespace kaleidoscope {
namespace plugin {

class SimpleKeyColormapper_ : public kaleidoscope::Plugin {
 public:
  SimpleKeyColormapper_(void) {}


  static void ledeffectlayer1(uint8_t r,uint8_t c,Key k);
  static void ledeffectlayer2(uint8_t r,uint8_t c,Key k);
  static void ledeffectlayer3(uint8_t r,uint8_t c,Key k);
  static void ledeffectlayer4(uint8_t r,uint8_t c,Key k);
  static void ledeffectlayer5(uint8_t r,uint8_t c,Key k);
  static void ledeffectlayer6(uint8_t r,uint8_t c,Key k);
  static void ledeffectlayer7(uint8_t r,uint8_t c,Key k);
  static void ledeffectlayer8(uint8_t r,uint8_t c,Key k);
  static void ledeffectlayer9(uint8_t r,uint8_t c,Key k);
  EventHandlerResult onSetup(void);
  EventHandlerResult afterEachCycle();

  static uint8_t ActiveLayer;

 private:

  static byte row, col;
  static bool cleanupDone;
};
}
}

extern kaleidoscope::plugin::SimpleKeyColormapper_ SimpleKeyColormapper;


