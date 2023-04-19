void setup(void) { /* Arduino setup */
  Serial.begin(9600); /* initialize UART 9600 bps */
  Serial.println("Example: EmoroServo.detach();"); /* send Examples name */
    if(ReadEmoroHardware() & LCD_AVAILABLE) /* if LCD on EMoRo GLAM is initialized */
Lcd.print("Servo.detach();"); /* print Examples function */
}

void loop(void){ /* Arduino loop */
  if(ReadEmoroHardware() & LCD_AVAILABLE){ /* if LCD on EMoRo GLAM is initialized */
    Lcd.locate(1, 0); /* set LCD print location to 1, 0 */
    Lcd.print("MOVING();"); /* print status of SERVO_1 output */
    }

  Serial.println("attach();"); /* send state of SERVO_0 output */
  EmoroServo.attach(SERVO_0); /* initialize servo motor on port SERVO_0 */
  EmoroServo.attach(SERVO_1);
  EmoroServo.write(SERVO_0, 1000); /* set SERVO_0 pulse 1ms */
  EmoroServo.write(SERVO_1, 2000);
  delay(2000); /* wait 2000 ms */
  if(ReadEmoroHardware() & LCD_AVAILABLE){ /* if LCD on EMoRo GLAM is initialized */
    Lcd.locate(1, 0); /* set LCD print location to 1, 0 */
    Lcd.print("FORWARD();"); /* print state of SERVO_0 output */
    }
  Serial.println("detach();"); /* send state of SERVO_0 output */
  EmoroServo.detach(SERVO_0); /* release resources of servo motor from SERVO_0 port */
  EmoroServo.detach(SERVO_1);
  delay(2000); /* wait 2000 ms */
}
