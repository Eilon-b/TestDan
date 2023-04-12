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
void setup() {
  // put your setup code here, to run once:
  InitEmoro();
  ReadEmoroHardware();
  Gyr.init();
  Gyr.resetDegrees();
}

void loop() {
  // put your main code here, to run repeatedly:
  x=Gyr.readDegreesX();
  y=Gyr.readDegreesY();
  z=Gyr.readDegreesZ();
  locatex = Lcd.locate(a,b);
  Gyrox = Lcd.print(x);
  locatey = Lcd.locate(a,b+7);
  Gyroy = Lcd.print(y);
  locatez = Lcd.locate(a+1,b); 
  Gyroz = Lcd.print(z);
}
