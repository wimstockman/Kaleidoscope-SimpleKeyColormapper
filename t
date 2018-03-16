<COLORMAP>NUMPAD,1,
if(M(MACRO_VERSION_INFO) || Key_Keypad7 || Key_Keypad8 || Key_Keypad9 || Key_2 || LockLayer(NUMPAD) || Key_Keypad4 || Key_Keypad5 || Key_Keypad6 || Key_KeypadAdd || Key_Keypad1 || Key_Keypad2 || Key_Keypad3 || Key_KeypadSubtract || Key_Keypad0){LEDControl.setCrgbAt(r, c, CRGB(186,19,26));}
if(LSHIFT(Key_LeftBracket) || Key_Quote || Key_KeypadDot || Key_KeypadMultiply || Key_KeypadDivide || Key_Enter){LEDControl.setCrgbAt(r, c, CRGB(255,251,204));}
</COLORMAP>
