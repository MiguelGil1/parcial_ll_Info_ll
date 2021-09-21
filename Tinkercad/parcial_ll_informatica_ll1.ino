#include <Adafruit_NeoPixel.h>
#define LED_PIN 2
#define LED_COUNT 256

Adafruit_NeoPixel leds(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// C++ code
//
void setup(){
  leds.begin();  
}

void loop(){
  for(int i = 0; i < LED_COUNT; i++){
    leds.setPixelColor(i,20,0,255);    
  }
  leds.show();
  delay(100);
  leds.clear();
  for(int i = 0; i < LED_COUNT; i+=2){
    leds.setPixelColor(i,20,0,255);    
  }
  leds.show();
  delay(100);
  leds.clear();
  for(int i = 0; i < LED_COUNT; i+=17){
    leds.setPixelColor(i,20,0,255);    
  }
  leds.show();
  delay(100);
  leds.clear();
}