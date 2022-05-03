#include <TM1637TinyDisplay.h>


// Define Digital Pins
#define DIO 2
#define CLK 3


// Initialize TM1637TinyDisplay
TM1637TinyDisplay display(CLK, DIO);

// set the starting score
int score = 0;

void setup() {
  // put your setup code here, to run once:
  display.setBrightness(BRIGHT_LOW);
}

void loop() {
  display.showNumber(score);
  score++;
}
