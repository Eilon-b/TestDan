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
int T0;
int T;
int deltaT=T-T0;
void setup() {
  // put your setup code here, to run once:
  InitEmoro();
  ReadEmoroHardware();
  Gyr.init();
  Gyr.resetDegrees();
  T0 = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  T=millis();  
  while (deltaT<3000){  
  x=Gyr.readDegreesX();
  y=Gyr.readDegreesY();
  z=Gyr.readDegreesZ();
  locatex = Lcd.locate(a,b);
  Gyrox = Lcd.print(x);
  locatey = Lcd.locate(a,b+7);
  Gyroy = Lcd.print(y);
  locatez = Lcd.locate(a+1,b); 
  Gyroz = Lcd.print(z);
    //drive forward
    EmoroServo.attach(SERVO_0);
    EmoroServo.attach(SERVO_1);
    EmoroServo.write(SERVO_0,2000);//right motor
    EmoroServo.write(SERVO_1,1000);//left motor
  }
    //delay(3000);
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
