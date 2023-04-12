void setup() {
  // put your setup code here, to run once:
  InitEmoro();
  ReadEmoroHardware();
}

void loop() {
  // put your main code here, to run repeatedly:
  //drive forward
    EmoroServo.attach(SERVO_0);
    EmoroServo.attach(SERVO_1);
    EmoroServo.write(SERVO_0,2000);//right motor
    EmoroServo.write(SERVO_1,1000);//left motor
    delay(3000);
  //right turn
    EmoroServo.attach(SERVO_0);
    EmoroServo.attach(SERVO_1);
    EmoroServo.write(SERVO_0,1300);//right motor
    EmoroServo.write(SERVO_1,1300);//left motor
    delay(2000);
      //drive forward
    EmoroServo.attach(SERVO_0);
    EmoroServo.attach(SERVO_1);
    EmoroServo.write(SERVO_0,2000);//right motor
    EmoroServo.write(SERVO_1,1000);//left motor
    delay(5000);
  //right turn
    EmoroServo.attach(SERVO_0);
    EmoroServo.attach(SERVO_1);
    EmoroServo.write(SERVO_0,1300);//right motor
    EmoroServo.write(SERVO_1,1300);//left motor
    delay(2000);
}
