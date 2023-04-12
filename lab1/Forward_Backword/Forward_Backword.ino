
void setup() {
  // put your setup code here, to run once:
  InitEmoro();
  ReadEmoroHardware();

}
void loop() {
  // put your main code here, to run repeatedly:
    EmoroServo.attach(SERVO_0);
    EmoroServo.attach(SERVO_1);
    EmoroServo.write(SERVO_0,1600);//right motor
    EmoroServo.write(SERVO_1,1350);//left motor
    delay(3000);
    EmoroServo.detach(SERVO_0);
    EmoroServo.detach(SERVO_1);
    delay(3000);
    EmoroServo.attach(SERVO_0);
    EmoroServo.attach(SERVO_1);
    EmoroServo.write(SERVO_0,1350);//right motor
    EmoroServo.write(SERVO_1,1600);//left motor
    delay(3000);
    EmoroServo.detach(SERVO_0);
    EmoroServo.detach(SERVO_1);
    delay(3000);
}
