int locatex;
int locatey;
int locatez;
double x;
double y;
double z;
int a=0;
int b=0;
double Gyrox;
double Gyroy;
double Gyroz;
void Forward(int T) {
  int T0,T1;
  int dT = 0;
  T0 = millis();
while (dT < T) {
  //drive forward
  EmoroServo.write(SERVO_0, 1970);  //right motor
  EmoroServo.write(SERVO_1, 1000);  //left motor
  x = Gyr.readDegreesX();
  y = Gyr.readDegreesY();
  z = Gyr.readDegreesZ();
  locatex = Lcd.locate(a, b);
  Gyrox = Lcd.print(x);
  locatey = Lcd.locate(a, b + 7);
  Gyroy = Lcd.print(y);
  locatez = Lcd.locate(a + 1, b);
  Gyroz = Lcd.print(z);
  T1 = millis();
  dT = T1 - T0;
}
}
void setup() {
  // put your setup code here, to run once:
  InitEmoro();
  ReadEmoroHardware();
  Gyr.init();
  Gyr.resetDegrees();
  EmoroServo.attach(SERVO_0);
  EmoroServo.attach(SERVO_1);
}

void loop() {
  // put your main code here, to run repeatedly:

  Forward(7500);//7500 ms equals to to 1.1 meter
  // right turn
  EmoroServo.write(SERVO_0, 1300);  //right motor
  EmoroServo.write(SERVO_1, 1300);  //left motor
  delay(1900);
  Forward(3410);//3410 ms equals to to 0.5 meter
  // right turn
  EmoroServo.write(SERVO_0, 1300);  //right motor
  EmoroServo.write(SERVO_1, 1300);  //left motor
  delay(1900);
}
