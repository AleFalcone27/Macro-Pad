#include <Keyboard.h>

// Defining each pin, with a unique name
#define KEY1 2
#define KEY2 4
#define KEY3 9
#define KEY4 15 
#define KEY5 6
#define KEY6 10


void setup() {

    pinMode (KEY1, INPUT_PULLUP);
    pinMode (KEY2, INPUT_PULLUP);
    pinMode (KEY3, INPUT_PULLUP);
    pinMode (KEY4, INPUT_PULLUP);
    pinMode (KEY5, INPUT_PULLUP);
    pinMode (KEY6, INPUT_PULLUP);
    Keyboard.begin();
    }

void loop() { 

    if (digitalRead(KEY1) == LOW)
    {
    Keyboard.press(KEY_LEFT_CTRL); delay(100); 
    Keyboard.press ("c"); delay(100); 
    Keyboard.release (KEY_LEFT_CTRL);
    Keyboard.release ("c");
    }

    if (digitalRead(KEY2) == LOW)
    {
    Keyboard.press(KEY_RIGHT_CTRL); delay(100);
    Keyboard.press("v"); delay(100);
    Keyboard.release(KEY_RIGHT_CTRL);
    Keyboard.release ("v");
    }

    if (digitalRead(KEY3) == LOW)
    {
    Keyboard.print("ñ");
    delay(100);
    Keyboard.release("ñ");
    }

    if (digitalRead(KEY4) == LOW)
    {
    Keyboard.press(KEY_RIGHT_CTRL); delay(100);
    Keyboard.press(KEY_LEFT_ALT); delay(100);
    Keyboard.press("s"); delay(100);
    Keyboard.release (KEY_RIGHT_CTRL);
    Keyboard.release (KEY_LEFT_ALT);
    Keyboard.release ("s");
    }
    }
