#include "arm.h"
#include "LED.h"

void INIT_LED(void)
{
    PMC_PCER = (1 << PIOA); 
    
    PIO_OWER    = (1 << LED_PIN);
    PIO_PER     = (1 << LED_PIN);
    PIO_OER     = (1 << LED_PIN);	
    
    PIO_SODR    = (1 << LED_PIN);
    
    return;
}

void LED_TOGGLE(void)
{
    if(0 != (PIO_ODSR  & (1 << LED_PIN)) )	// if LED is off.	
    {
        PIO_CODR = (1 << LED_PIN);
    }
    else	// if LED is on.
    {
        PIO_SODR = (1 << LED_PIN);
    }
}
