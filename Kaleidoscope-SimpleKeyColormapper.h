#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-Macros.h"
namespace kaleidoscope {
namespace plugin {

class SimpleKeyColormapper_ : public kaleidoscope::Plugin {
 public:
  SimpleKeyColormapper_(void) {}


  static void ledeffectlayer1(Key k);
  static void ledeffectlayer2(Key k);
  static void ledeffectlayer3(Key k);
  static void ledeffectlayer4(Key k);
  static void ledeffectlayer5(Key k);
  static void ledeffectlayer6(Key k);
  static void ledeffectlayer7(Key k);
  static void ledeffectlayer8(Key k);
  static void ledeffectlayer9(Key k);
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


