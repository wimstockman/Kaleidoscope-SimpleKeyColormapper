#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-Macros.h"
namespace kaleidoscope {
namespace plugin {

class SimpleKeyColormapper_ : public kaleidoscope::Plugin {
 public:
  SimpleKeyColormapper_(void) {}


  static void ledeffectlayer1();
  static void ledeffectlayer2();
  static void ledeffectlayer3();
  static void ledeffectlayer4();
  static void ledeffectlayer5();
  static void ledeffectlayer6();
  static void ledeffectlayer7();
  static void ledeffectlayer8();
  static void ledeffectlayer9();
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


