#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(400);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(400);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(400);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("yourPasswordHere");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

void loop() {
}
