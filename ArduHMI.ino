/* sample code for ArduHMI */
/* see project documentation under http://arduhmi.generationmake.de/ */
//#include <dog_7565R.h>
#include <DogGraphicDisplay.h>
#include "ubuntumono_b_32.h"
#include "ubuntumono_b_16.h"
#include "ubuntumono_b_8.h"

#define LOGO_LEN  386

#if defined(ARDUINO_ARCH_AVR)
  // AVR-specific code
const byte logo[LOGO_LEN] __attribute__((section(".progmem.data")))=
#else
  // generic, non-platform specific code
const byte logo[LOGO_LEN] =
#endif
{
   128, 24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00,
0x00, 0x40, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xCC, 0xFE, 0xF1, 0xF3, 0xDF, 0x9F, 0x83, 0x00, 0x00, 0x7C,
0x7E, 0xDB, 0x91, 0x9B, 0xDE, 0x5C, 0x00, 0x00, 0xFF, 0xFF,
0x0E, 0x02, 0x03, 0x07, 0xFE, 0xFC, 0x00, 0x00, 0x7E, 0x7E,
0xD3, 0x91, 0x9B, 0xDE, 0x5C, 0x00, 0x00, 0xFF, 0xFF, 0x0C,
0x02, 0x03, 0x00, 0x70, 0xF2, 0xD3, 0x91, 0x53, 0x7F, 0xFE,
0x00, 0x00, 0x02, 0x7F, 0xFF, 0xC3, 0xC1, 0x40, 0x00, 0xFF,
0xFF, 0xFF, 0x00, 0x00, 0x7C, 0x7E, 0xC3, 0x83, 0xC3, 0x7E,
0x3C, 0x10, 0x00, 0xFF, 0xFF, 0x0E, 0x02, 0x03, 0x0F, 0xFE,
0xFC, 0x00, 0x00, 0x00, 0xFF, 0x06, 0x00, 0x03, 0xFF, 0xFE,
0x00, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x00, 0x60, 0x70, 0xD2,
0x11, 0x53, 0x7E, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x18,
0x1C, 0x7E, 0xF3, 0xC1, 0x00, 0x00, 0x18, 0x7E, 0x5E, 0x93,
0x91, 0x9E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x04,
0x04, 0x04, 0x04, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00
};

// define some values used by the panel and buttons
#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5

// read the buttons
int read_LCD_buttons()
{
  int adc_key_in = analogRead(0);      // read the value from the sensor 
  // my buttons when read are centered at these valies: 0, 144, 329, 504, 741
  // my buttons when read are centered at these values (MKR1010): 0, 11, 162, 354, 531, 763
  // we add approx 50 to those values and check to see if we are close
  if (adc_key_in > 1000) return btnNONE; // We make this the 1st option for speed reasons since it will be the most likely result
  if (adc_key_in < 50)   return btnRIGHT;  
  if (adc_key_in < 250)  return btnUP; 
  if (adc_key_in < 450)  return btnDOWN; 
  if (adc_key_in < 650)  return btnLEFT; 
  if (adc_key_in < 850)  return btnSELECT;  

  return btnNONE;  // when all others fail, return this...
}

dog_7565R DOG;

//int backlight_led = 10;
int backlight_led = A6;
void init_backlight(boolean mono);
void mono_backlight(byte brightness);

//create a sample sceen content
void sample_screen(void)
{
  DOG.clear();  //clear whole display
  DOG.string(11,0,UBUNTUMONO_B_8,"www.generationmake.de");
  DOG.string(15,1,UBUNTUMONO_B_16,"EA DOGM128-6");
  DOG.string(40,3,UBUNTUMONO_B_16,"ArduHMI");
}

void setup() {
  // put your setup code here, to run once:

  init_backlight(true); //use monochrome backlight in this sample code. Please change it to your configuration
//  DOG.initialize(6,5,7,8,9,DOGM132);   //SS = 10, 0,0= use Hardware SPI, 9 = A0, 4 = RESET, EA DOGM132-5 (=132x32 dots)
//  DOG.initialize(6,5,7,8,9,DOGM128);   //SS = 10, 0,0= use Hardware SPI, 9 = A0, 4 = RESET, EA DOGM128-6 (=128x64 dots)
#if defined(ARDUINO_ARCH_AVR)
  // AVR-specific code
  DOG.initialize(6,0,0,8,9,DOGM128);   //SS = 10, 0,0= use Hardware SPI, 9 = A0, 4 = RESET, EA DOGM128-6 (=128x64 dots)
#elif defined(ARDUINO_ARCH_SAMD)
  // SAMD-specific code
  DOG.initialize(6,0,0,0,1,DOGM128);   //SS = 6, 0,0= use Hardware SPI, 0 = A0, 1 = RESET, EA DOGM128-6 (=128x64 dots)
//  DOG.initialize(6,8,9,0,1,DOGM128);   //SS = 6, 8,9= use Software SPI, 0 = A0, 1 = RESET, EA DOGM128-6 (=128x64 dots)
#else
  DOG.initialize(6,10,11,8,9,DOGM128);   //SS = 10, 0,0= use Hardware SPI, 9 = A0, 4 = RESET, EA DOGM128-6 (=128x64 dots)
#endif
  DOG.clear();  //clear whole display
  DOG.picture(0,0,logo);
  delay(1000);
  DOG.string(30,3,UBUNTUMONO_B_16,"ArduHMI");
  DOG.string(20,5,UBUNTUMONO_B_16,"20.08.2019");
  delay(3000);
  DOG.clear();  //clear whole display
  DOG.string(0,0,UBUNTUMONO_B_32,"1;:23.456,7890");
  DOG.string(0,4,UBUNTUMONO_B_32,"ABCDEFGH");
  delay(3000);
  mono_backlight(255);    //BL to full brightness
  DOG.view(VIEW_BOTTOM);  //default viewing direction
  sample_screen();        //show content
}

void loop() {
  int lcd_key     = 0;
  char buffer[50];
  static byte backlight=255;

  // put your main code here, to run repeatedly:
  DOG.rectangle(96,6,127,6,0);
  DOG.rectangle(96,7,127,7,0);
  DOG.string(96,6,UBUNTUMONO_B_16,itoa(analogRead(0),buffer,10));  // display raw value of analog in

  lcd_key = read_LCD_buttons();  // read the buttons

// menu
  switch (lcd_key)               // depending on which button was pushed, we perform an action
  {
    case btnRIGHT:               // go to next position
      {
        DOG.string(44,6,UBUNTUMONO_B_16,"right ");
        break;
      }
    case btnLEFT:               // go to next position
      {
        DOG.string(44,6,UBUNTUMONO_B_16," left ");
        break;
      }
    case btnUP:               // go to next position
      {
        if(backlight<255) backlight++;
        mono_backlight(backlight);    //BL to half brightness
        DOG.rectangle(0,6,24,6,0);
        DOG.rectangle(0,7,24,7,0);
        DOG.string(0,6,UBUNTUMONO_B_16,itoa(backlight,buffer,10));
        DOG.string(44,6,UBUNTUMONO_B_16,"  up  ");
        break;
      }
    case btnDOWN:               // go to next position
      {
        if(backlight>0) backlight--;
        mono_backlight(backlight);    //BL to half brightness
        DOG.rectangle(0,6,24,6,0);
        DOG.rectangle(0,7,24,7,0);
        DOG.string(0,6,UBUNTUMONO_B_16,itoa(backlight,buffer,10));
        DOG.string(44,6,UBUNTUMONO_B_16," down ");
        break;
      }
    case btnSELECT:               // go to next position
      {
        DOG.string(44,6,UBUNTUMONO_B_16,"select");
        break;
      }
    case btnNONE:               // go to next position
      {
        DOG.string(44,6,UBUNTUMONO_B_16," none ");
        break;
      }
  }

  delay(20);
}

//The following functions controll the backlight with a PWM. Not needed for the display content
void init_backlight(boolean mono)
{
  if(mono) //EA LED55X31-G, EA LED55X31-W, EA LED55X31-B, EA LED55X31-A, EA LED55X31-R
  {
    pinMode(backlight_led,  OUTPUT);
    mono_backlight(255);
  }
}
//Use this funtion for monochrome backlight
void mono_backlight(byte brightness)
{
#if defined(ARDUINO_ARCH_AVR)
  // AVR-specific code
  analogWrite(backlight_led, brightness);  
#elif defined(ARDUINO_ARCH_SAMD)
  // SAMD-specific code
  if(brightness>0) digitalWrite(backlight_led,  HIGH);
  else digitalWrite(backlight_led,  LOW);
#endif
}
