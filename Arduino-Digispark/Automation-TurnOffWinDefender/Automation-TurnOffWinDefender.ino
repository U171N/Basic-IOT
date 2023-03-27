#include <DigiKeyboard.h>

void setup() {
  // Setup code untuk melakukan Turn Off windows DEFENDER secara otomatis
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_M,MOD_GUI_LEFT); //minimize semua program
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT); //memulai membuka pencarian program
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("Windows Defender Firewall"); //memasukan nama aplikasi yang diinginkan
  DigiKeyboard.delay(2000);
  
  DigiKeyboard.write(0x09); //Press TAB 1
  DigiKeyboard.delay(1000);
  DigiKeyboard.write(0x09); //Press TAB 2
  DigiKeyboard.delay(1000);
  DigiKeyboard.write(0x09); //Press TAB 3
  DigiKeyboard.delay(1000);
  DigiKeyboard.write(0x09); //Press TAB 4
  DigiKeyboard.delay(1000);
  DigiKeyboard.write(0x09); //Press TAB 5
  DigiKeyboard.delay(1000);
  DigiKeyboard.write(0x09); //Press TAB 6
  DigiKeyboard.delay(2000);
  DigiKeyboard.write(0x09); //Press TAB 7
  DigiKeyboard.delay(1000);
  DigiKeyboard.write(0x09); //Press TAB 8
  
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke( KEY_ARROW_LEFT ); //Left arrow key
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); //close window
}
void loop() {
  // Methode ini digunakan untuk melakukan loooping dari sebuah program yang telah dibuat pada method void setup diatas
  // prevent missing the first character after a delay:
  //DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
 // DigiKeyboard.println("Hello Digispark!");
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
//  DigiKeyboard.delay(5000);
}
