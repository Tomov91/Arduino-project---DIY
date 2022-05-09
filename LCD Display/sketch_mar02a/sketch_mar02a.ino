#include <SPI.h>
#include <TFT.h>

#define cs 10
#define dc 9
#define rst 8

TFT TFTScreen = TFT(cs,dc,rst);

void setup(){
  TFTscreen.begin();
  TFTscreen.background(0,0,0);
  TFTscreen.stroke(255,255,255);
  TFTscreen.setTextSize(2);

  TFTscreen.text("I need a job");
}

void loop(){
  
  }
