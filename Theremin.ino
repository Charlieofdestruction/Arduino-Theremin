#include "pitches.h"
#include "SR04.h"

#define TRIG_PIN 12
#define ECHO_PIN 11
#define BLUE 9
#define GREEN 5
#define RED 6

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
  
int melody[] = {
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_GS5 };



void setup() {
  // put your setup code here, to run once:

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}
  int redValue;
  int greenValue;
  int blueValue;
  


void loop() {
  // put your main code here, to run repeatedly:
   a = sr04.Distance();
   Serial.print(a);
   Serial.println("cm");//The difference between "Serial.print" and "Serial.println" 
                        //is that "Serial.println" can change lines.
   delay(10);

   redValue = 0;
   greenValue = 0;
   blueValue = 0;
   
   if ((a >=5) && (a <= 8)) {
      tone(8, melody[0]);
      redValue = 0;
      greenValue = 0;
      blueValue = 250;
      analogWrite(RED, redValue);
      analogWrite(GREEN, greenValue);
      analogWrite(BLUE, blueValue);
   }
   else if ((a >= 9) && (a <= 12)) {
      tone (8, melody[1]);
       redValue = 30;
       greenValue = 200;
       blueValue = 1;
      analogWrite(RED, redValue);
      analogWrite(GREEN, greenValue);
      analogWrite(BLUE, blueValue);
   }
   else if ((a >= 13) && (a <= 16)) {
       tone (8, melody[2]);
        redValue = 200;
        greenValue = 175;
        blueValue = 1;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
   }
   else if ((a >= 17) && (a <= 20)) {
       tone (8, melody[3]);
        redValue = 66;
        greenValue = 129;
        blueValue = 33;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
   }
   else if ((a >= 21) && (a <= 24)) {
       tone (8, melody[4]);
        redValue = 100;
        greenValue = 250;
        blueValue = 100;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
   }
   else if ((a >= 25) && (a <= 28)) {
       tone (8, melody[5]);
        redValue = 150;
        greenValue = 100;
        blueValue = 100;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
   }
   else if ((a >= 29) && (a <= 32)) {
       tone (8, melody[6]);
        redValue = 200;
        greenValue = 50;
        blueValue = 50;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
   }
   else if ((a >= 33) && (a <= 36)) {
       tone (8, melody[7]);
        redValue = 255;
        greenValue = 0;
        blueValue = 0;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
   }
   else {
       noTone(8);
       redValue = 0;
       greenValue = 0;
       blueValue = 0; 
       analogWrite(RED, redValue);
       analogWrite(GREEN, greenValue);
       analogWrite(BLUE, blueValue);
   }
   
    
}
