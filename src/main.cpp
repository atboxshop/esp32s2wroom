#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PIN            20
#define NUMPIXELS      64 //only 64 pixel onboard
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB);
int delayval = 20;
int brightness = 2;
int i;
int x = 200;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pixels.begin(); // This initializes the NeoPixel library.

}

void loop() {
  // put your main code here, to run repeatedly:
  if (x==100)
  {
    x=255;
  }
  for(i=0; i <= 64; i++)
  {
    Serial.println("R");
    pixels.setPixelColor(i, pixels.Color(x,0,0)); //red
    pixels.setBrightness(brightness);
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval);
  }
  //delay(1000); // Delay for a period of time (in milliseconds).
  for(i=64; i >= 0; i--)
  {
    Serial.println("G");
    pixels.setPixelColor(i, pixels.Color(0,x,0)); //green
    pixels.setBrightness(brightness);
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval);
  }
  //delay(1000); // Delay for a period of time (in milliseconds).
  for(i=0; i <= 64; i++)
  {
    Serial.println("B");
    pixels.setPixelColor(i, pixels.Color(0,0,x)); //blue
    pixels.setBrightness(brightness);
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval);
  }
  //delay(1000); // Delay for a period of time (in milliseconds).
  for(i=0; i <= 64; i++)
  {
    Serial.println("OFF");
    pixels.setPixelColor(i, pixels.Color(0,0,0)); //off
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval);
  }
  delay(200);
  x--;
  Serial.println(x);
}