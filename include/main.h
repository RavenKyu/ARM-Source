#ifndef __MAIN_H__
#define __MAIN_H__

#define PIO_PER		(*((volatile unsigned int *)0xFFFFF400)) 
#define PIO_PDR		(*((volatile unsigned int *)0xFFFFF404)) 
#define PIO_PSR		(*((volatile unsigned int *)0xFFFFF408)) 
#define PIO_OER		(*((volatile unsigned int *)0xFFFFF410)) 
#define PIO_SODR		(*((volatile unsigned int *)0xFFFFF430)) 
#define PIO_CODR		(*((volatile unsigned int *)0xFFFFF434)) 
#define PMC_PCER		(*((volatile unsigned int *)0xFFFFFC10)) 
#define PIO_OWER		(*((volatile unsigned int *)0xFFFFF4A0)) 
#define PIO_OWDR 		(*((volatile unsigned int *)0xFFFFF4A4)) 
#define PIO_ODSR 		(*((volatile unsigned int *)0xFFFFF438)) 
#define PORTA PIO_ODSR

#define PIOA_ID 2

#define LED_ENABLE PIO_PER
#endif //__MAIN_H__

