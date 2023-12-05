#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include <stdlib.h>

#define PIN            18
#define NUMPIXELS      64 //only 64 pixel onboard
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB);
int delayval = 5;
int brightness = 5;
int i;
int x = 10;
int y = 10;
int z = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pixels.begin(); // This initializes the NeoPixel library.

}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0; i <= 64; i++)
  {
    Serial.println("R");
    pixels.setPixelColor(i, pixels.Color(x,y,z));
    pixels.setBrightness(brightness);
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval);
    x = random(255);
    y = random(255);
    z = random(255);
    //brightness = random(255);
  }
  //delay(1000); // Delay for a period of time (in milliseconds).
  /**for(i=64; i >= 0; i--)
  {
    Serial.println("G");
    pixels.setPixelColor(i, pixels.Color(x,y,z));
    pixels.setBrightness(brightness);
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval);
    x = random(255);
    y = random(255);
    z = random(255);
    //brightness = random(255);
  }
  //delay(1000); // Delay for a period of time (in milliseconds).
  for(i=0; i <= 64; i++)
  {
    Serial.println("B");
    pixels.setPixelColor(i, pixels.Color(x,y,z));
    pixels.setBrightness(brightness);
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval);
    x = random(255);
    y = random(255);
    z = random(255);
    //brightness = random(255);
  }**/
  //delay(1000); // Delay for a period of time (in milliseconds).
  for(i=64; i >= 0; i--)
  {
    Serial.println("OFF");
    pixels.setPixelColor(i, pixels.Color(0,0,0)); //off
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval);
  }
}