/*
 Created Aug 31 2015
 By Kelsi Blauvelt

 LoopALLColors
 Brute Force loop through all colors of the common anode RGB LED
*/

int REDPin = 6;    // RED pin of the LED to digital PWM pin 4
int GREENPin = 5;  // GREEN pin of the LED to digital PWM pin 5
int BLUEPin = 3;   // BLUE pin of the LED to digital PWM pin 6

int ON = 0;
int OFF = 255;

void setup()
{
  pinMode(REDPin, OUTPUT);
  pinMode(GREENPin, OUTPUT);
  pinMode(BLUEPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ 
  for(int i = 0; i < 256; i++){ // Black to Red
      analogWrite(REDPin, (255-i));
      analogWrite(GREENPin, OFF);
      analogWrite(BLUEPin, OFF);
      delay(20);
  }
    for(int i = 0; i < 256; i++){ // Red to Purple
      analogWrite(REDPin, ON);
      analogWrite(GREENPin, OFF);
      analogWrite(BLUEPin, (255-i));
      delay(20);
  }
    for(int i = 0; i < 256; i++){ // Purple to Blue
      analogWrite(REDPin, (0+i));
      analogWrite(GREENPin, OFF);
      analogWrite(BLUEPin, ON);
      delay(20);
  }
    for(int i = 0; i < 256; i++){ //Blue to Cyan
      analogWrite(REDPin, OFF);
      analogWrite(GREENPin, (255-i));
      analogWrite(BLUEPin, ON);
      delay(20);
  }
    for(int i = 0; i < 256; i++){ // Cyan to Green
      analogWrite(REDPin, OFF);
      analogWrite(GREENPin, ON);
      analogWrite(BLUEPin, (0+i));
      delay(20);
  }
    for(int i = 0; i < 256; i++){ // Green to Yellow
      analogWrite(REDPin, (255-i));
      analogWrite(GREENPin, ON);
      analogWrite(BLUEPin, OFF);
      delay(20);
  }
    for(int i = 0; i < 256; i++){ // Yellow to White
      analogWrite(REDPin, ON);
      analogWrite(GREENPin, ON);
      analogWrite(BLUEPin, (255-i));
      delay(20);
  }
}

