float P;
int voltage;
int corner;
int x=0;
int y=0;
void setup(void) {
  // put your setup code here, to run once:
int initEmoro();
int ReadEmoroHardware();
}
void loop(void){
  // put your main code here, to run repeatedly:
P = ReadPowerSupply();
corner = Lcd.locate(x,y); 
voltage = Lcd.print(P); 
}
