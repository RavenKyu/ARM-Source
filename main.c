#include "arm.h"
#include "LED.h"

void INIT(void);

int main(void)
{
	volatile unsigned int i_count;
	INIT();
	
	while(1)
	{
		for(i_count = 0; i_count <= 100000; i_count++);

		LED_TOGGLE();
	}
	
	while(1);	
	return 0;
}

void INIT(void)
{
	INIT_LED();
	return;
}
