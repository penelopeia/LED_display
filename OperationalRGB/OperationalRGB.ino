/*
 Created Aug 31 2015
 By Kelsi Blauvelt

 OperationalRGB
 Improved program to loop through all colors of common anode RGB LED
*/

int REDPin = 6;    // RED pin of the LED to PWM pin 4
int GREENPin = 5;  // GREEN pin of the LED to PWM pin 5
int BLUEPin = 3;   // BLUE pin of the LED to PWM pin 6

int ON = 0;
int OFF = 255;

int BLACK[3] = {OFF, OFF, OFF};
int RED[3] = {ON, OFF, OFF};
int PURPLE[3] = {ON, OFF, ON};
int BLUE[3] = {OFF, OFF, ON};
int CYAN[3] = {OFF, ON, ON};
int GREEN[3] = {OFF, ON, OFF};
int YELLOW[3] = {ON, ON, OFF};
int WHITE[3] = {ON, ON, ON};

int colorOrder[] = {*BLACK, *RED, *PURPLE, *BLUE, *CYAN, *GREEN, *YELLOW, *WHITE};

int setColor[3];

void setup()
{
  pinMode(REDPin, OUTPUT);
  pinMode(GREENPin, OUTPUT);
  pinMode(BLUEPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ 
    for(int i = 0; i < 9; i++){ // Black to Red
    *setColor = colorOrder[i];
      analogWrite(REDPin, setColor[0]);
      analogWrite(GREENPin, setColor[1]);
      analogWrite(BLUEPin, setColor[2]);
      delay(1000);
  }
}

