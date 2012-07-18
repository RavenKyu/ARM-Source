//////////////////////////////////////////////////////////////////////////////////////////
//////////////////		2012. 07. 18 	This is written by Raven					//////////////////	
//////////////////		Ref Spec :: 6175G.ATARM.22-Nov-06					//////////////////		
//////////////////////////////////////////////////////////////////////////////////////////
#ifndef __ARM_H__
#define __ARM_H__

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////		Parallel Input Output Controller (PIO) P.88					//////////////////	
//////////////////////////////////////////////////////////////////////////////////////////

#define PIO_PER		(*((volatile unsigned int *)0xFFFFF400)) 	// PIO Enable Register
#define PIO_PDR		(*((volatile unsigned int *)0xFFFFF404)) 	// PIO Disable Register
#define PIO_PSR		(*((volatile unsigned int *)0xFFFFF408)) 	// PIO Status Register (1)

#define PIO_OER		(*((volatile unsigned int *)0xFFFFF410)) 	// Output Enable Register
#define PIO_ODR		(*((volatile unsigned int *)0xFFFFF414)) 	// Output Disable Register
#define PIO_OSR		(*((volatile unsigned int *)0xFFFFF418)) 	// Output Status Register

#define PIO_IFER		(*((volatile unsigned int *)0xFFFFF420)) 	// Glitch Input Filter Enable Register
#define PIO_IFDR		(*((volatile unsigned int *)0xFFFFF424)) 	// Glitch Input Filter Disable Register
#define PIO_IFSR		(*((volatile unsigned int *)0xFFFFF428)) 	// Glitch Input Filter Status Register

#define PIO_SODR	(*((volatile unsigned int *)0xFFFFF430)) 	// Set Output Data Register
#define PIO_CODR	(*((volatile unsigned int *)0xFFFFF434)) 	// Clear Output Data Register
#define PIO_ODSR	(*((volatile unsigned int *)0xFFFFF438)) 	// Output Data Status Register(2)
#define PIO_PDSR 	(*((volatile unsigned int *)0xFFFFF43C)) 	// Pin Data Status Register(3)

#define PIO_IER 		(*((volatile unsigned int *)0xFFFFF440)) 	// Interrupt Enable Register
#define PIO_IDR 		(*((volatile unsigned int *)0xFFFFF444)) 	// Interrupt Disable Register
#define PIO_IMR 		(*((volatile unsigned int *)0xFFFFF448)) 	// Interrupt Mask Register
#define PIO_ISR 		(*((volatile unsigned int *)0xFFFFF44C)) 	// Interrupt Status Register(4)

#define PIO_MDER	(*((volatile unsigned int *)0xFFFFF450)) 	// Multi-driver Enable Register
#define PIO_MDDR	(*((volatile unsigned int *)0xFFFFF454)) 	// Multi-driver Disable Register
#define PIO_MDSR	(*((volatile unsigned int *)0xFFFFF458)) 	// Multi-driver Status Register

#define PIO_PUDR	(*((volatile unsigned int *)0xFFFFF460)) 	// Pull-up Disable Register
#define PIO_PUER 	(*((volatile unsigned int *)0xFFFFF464)) 	// Pull-up Enable Register
#define PIO_PUSR 	(*((volatile unsigned int *)0xFFFFF468)) 	// Pad Pull-up Status Register	

#define PIO_ASR 		(*((volatile unsigned int *)0xFFFFF470)) 	// Peripheral A Select Register(5)
#define PIO_BSR 		(*((volatile unsigned int *)0xFFFFF474)) 	// Peripheral B Select Register(5)	
#define PIO_ABSR 	(*((volatile unsigned int *)0xFFFFF478)) 	// AB Status Register(5)


#define PIO_OWER	(*((volatile unsigned int *)0xFFFFF4A0)) 	// Output Write Enable
#define PIO_OWDR	(*((volatile unsigned int *)0xFFFFF4A4)) 	// Output Write Disable
#define PIO_OWSR	(*((volatile unsigned int *)0xFFFFF4A8)) 	// Output Write Status Register

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////		Power Management Controller (PMC) User Interface P.222	//////////////////	
//////////////////////////////////////////////////////////////////////////////////////////
#define PMC_PCER	(*((volatile unsigned int *)0xFFFFFC10)) 	// Peripheral Clock Enable Register

//Peripheral Identifiers

#define AIC 	 	 0	// Advanced Interrupt Controller FIQ
#define SYSC 	 1 	// System
#define PIOA 	 2 	// Parallel I/O Controller A
#define ADC  		 4 	// Analog-to Digital Converter
#define SPI 	 	 5 	// Serial Peripheral Interface
#define US0 	 	 6 	// USART 0
#define US1 		 7 	// USART 1
#define SSC 	 	 8 	// Synchronous Serial Controller
#define TWI 	 	 9 	// Two-wire Interface
#define PWMC 	 10 	// PWM Controller
#define UDP 	 	 11	// USB Device Port
#define TC0 		 12   // Timer/Counter 0
#define TC1 		 13   // Timer/Counter 1
#define TC2 		 14 
#define AIC_IRQ0 30  // Advanced Interrupt Controller IRQ0
#define AIC_IRQ1 31  // Advanced Interrupt Controller IRQ1


#endif	//	__ARM_H__
