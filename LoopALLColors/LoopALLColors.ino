//for common anode rgb led

//color order [] = black, red, purple, blue, cyan, green, yellow, white

int REDPin = 6;    // RED pin of the LED to PWM pin 4
int GREENPin = 5;  // GREEN pin of the LED to PWM pin 5
int BLUEPin = 3;   // BLUE pin of the LED to PWM pin 6

int brightness = 0; // LED brightness
int increment = 1;  // brightness increment

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
  /*
  brightness = brightness + increment;  // increment brightness for next loop iteration

  if (brightness <= 0 || brightness >= 255)    // reverse the direction of the fading
  {
    increment = -increment;
  }
  brightness = constrain(brightness, 0, 255);
  */
  
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

  delay(20);  // wait for 20 milliseconds to see the dimming effect
}

// CONTROL Color and Brightness, timing is important for Fade.
// 0 = full color, 255 = off
