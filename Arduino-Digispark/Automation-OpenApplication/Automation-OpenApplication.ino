#include "DigiKeyboard.h"

void setup() {
  // setup code
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // membuka "Run" dialog box
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("cmd"); // mengetikkan "cmd" pada "Run" dialog box
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // menekan tombol "Enter"
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("exit"); //menutup program secara otomatis setelah melalui delay diatas
  
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  //DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  //DigiKeyboard.println("Hello Digispark!");
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  //DigiKeyboard.delay(5000);
}
