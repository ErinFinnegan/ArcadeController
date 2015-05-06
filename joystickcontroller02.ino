

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(2, INPUT_PULLUP);
  //pinMode(3, INPUT_PULLUP);
  pinMode(2, INPUT);
  pinMode(3, INPUT);

  Keyboard.begin();
  //Mouse.begin();
}

void loop() {

  if (digitalRead(2) == HIGH) { //originally LOW

    //   Keyboard.press('L');
    Keyboard.press(KEY_LEFT_ARROW);
    //   Mouse.click();
    Serial.print(0);
    delay(10);
    //   Keyboard.release('L');
    //Keyboard.release(KEY_LEFT_ARROW);
    // Mouse.release();

  } else {
    Keyboard.release(KEY_LEFT_ARROW);
  }

  if (digitalRead(3) == HIGH) { //orginially LOW
    //   Keyboard.press('R');
    Keyboard.press(KEY_RIGHT_ARROW);
    Serial.print(1);
    delay(10);
   // Keyboard.release(KEY_RIGHT_ARROW);
    //Keyboard.release('R');

  } else {
    Keyboard.release(KEY_RIGHT_ARROW);
  }

}


