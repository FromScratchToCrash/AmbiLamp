#include "LedControl.h"
#include "BackgroundLed.h"

/**************************************************************/
/*                         PUBLIC DATA                        */
/**************************************************************/



/**************************************************************/
/*                         PRIVATE DATA                       */
/**************************************************************/

/**************************************************************/
/*                        PUBLIC FUNCTIONS                    */
/**************************************************************/

void BackgroundMode(uint8_t color)
{
  uint8_t i;

  for(i = 0; i < NUM_LEDS; i++) 
  {                              
    LedRunningInfo.leds[i] = CHSV(color, 255, BRIGHTNESS_MAX);                                  
  }
}

/**************************************************************/
/*                        PRIVATE FUNCTIONS                   */
/**************************************************************/