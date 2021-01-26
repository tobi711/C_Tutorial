

#include <Arduino.h>
#include <U8x8lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif

// Please UNCOMMENT one of the contructor lines below
// U8x8 Contructor List 
// The complete list is available here: https://github.com/olikraus/u8g2/wiki/u8x8setupcpp
// Please update the pin numbers according to your setup. Use U8X8_PIN_NONE if the reset pin is not connected



U8X8_SSD1306_128X64_NONAME_SW_I2C u8x8(/* clock=*/22, /* data=*/ 21, /* reset=*/ U8X8_PIN_NONE);   // OLEDs without Reset of the Display



void setup(void)
{
  /* U8g2 Project: SSD1306 Test Board */
  
  //pinMode(10, OUTPUT);
  //pinMode(9, OUTPUT);
  //digitalWrite(10, 0);
  //digitalWrite(9, 0);   
  
  /* U8g2 Project: KS0108 Test Board */
  //pinMode(16, OUTPUT);
  //digitalWrite(16, 0);  
  
  u8x8.begin();
  u8x8.setPowerSave(0);
  
  
}

void loop(void)
{
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  u8x8.drawString(0,1,"Leckeren Ronsen!");
   u8x8.drawString(0,2,"FUT Schwitze");

 
  u8x8.refreshDisplay();    // only required for SSD1606/7  
  delay(2000);
}