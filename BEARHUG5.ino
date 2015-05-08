
int rotaryA = 5;
int rotaryB = 6;
int rotaryC = 7;
int rotaryD = 8;
int rotaryE = 9;
int rotaryF = 10;

int joystickLeft = 3;
int joystickRight = 4;
//1

void setup() {

  pinMode(joystickLeft, INPUT);
  pinMode(joystickRight, INPUT);
  pinMode (rotaryA, INPUT);
  pinMode (rotaryB, INPUT);
  pinMode (rotaryC, INPUT);
  pinMode (rotaryD, INPUT);
  pinMode (rotaryE, INPUT);
  pinMode (rotaryF, INPUT);

  Serial.begin(9600);
  Keyboard.begin();

}

//
void loop() {
  //FOR THE MOTHERFUCKIN JOYSTICKS

  if (digitalRead(3) == HIGH) {
    Keyboard.press(KEY_LEFT_ARROW);
    Serial.println("LEFTPressed");
    delay(2);
  } else {
    Keyboard.release(KEY_LEFT_ARROW);
  }

  if (digitalRead(4) == HIGH) {
    Keyboard.press(KEY_RIGHT_ARROW);
    Serial.println("RIGHTPressed");
    delay(2);
  } else {
    Keyboard.release(KEY_RIGHT_ARROW);
  }



  if (digitalRead(rotaryA) == HIGH) {
    Keyboard.press('1');
    delay(2);
    //Keyboard.release('1');
  } else {
    Keyboard.release('1');
    // Keyboard.releaseAll();
  }

  if (digitalRead(rotaryB) == HIGH) {
    Keyboard.press('2');
    Serial.println("2PRESSED");
    delay(2);
    //Keyboard.release('2');
  } else {
    Keyboard.release('2');
  }



  if (digitalRead(rotaryC) == HIGH) {
    Keyboard.press('3');
    Serial.println("3PRESSED");
    delay(2);
  } else {
    Keyboard.release('3');
  }


  if (digitalRead(rotaryD) == HIGH) {
    Keyboard.press('4');
    Serial.println("4PRESSED");
    delay(2);
  } else {
    Keyboard.release('4');
  }

  if (digitalRead(rotaryE) == HIGH) {
    Keyboard.press('5');
    Serial.println("5PRESSED");
    delay(2);
  } else {
    Keyboard.release('5');
  }
  //1111
  if (digitalRead(rotaryF) == HIGH) {
    Keyboard.press('6');
    Serial.println("6PRESSED");
    delay(2);
  } else {
    Keyboard.release('6');
  }

}

