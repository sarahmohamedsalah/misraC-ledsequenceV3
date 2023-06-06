/*
 * registers.h
 *
 * Created: 6/5/2023 12:01:46 PM
 *  Author: Sarah
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "../LIB/stdtypes.h"


typedef enum{
	bit0,
	bit1,
	bit2,
	bit3,
	bit4,
	bit5,
	bit6,
	bit7
}EN_bitNumber_t;
/************************************************************************/
/*							DIO_REGISTERS								*/
/************************************************************************/
// PORTD registers
#define PIND		(*((volatile uint8_t_*)(0x30)))
#define DDRD		(*((volatile uint8_t_*)(0x31)))
#define PORTD		(*((volatile uint8_t_*)(0x32)))

// PORTC registers
#define PINC		(*((volatile uint8_t_*)(0x33)))
#define DDRC		(*((volatile uint8_t_*)(0x34)))
#define PORTC		(*((volatile uint8_t_*)(0x35)))

// PORTB registers
#define PINB 		(*((volatile uint8_t_*)(0x36)))
#define DDRB		(*((volatile uint8_t_*)(0x37)))
#define PORTB		(*((volatile uint8_t_*)(0x38)))

// PORTA registers
#define	PINA		(*((volatile uint8_t_*)0x39))
#define	DDRA		(*((volatile uint8_t_*)0x3A))
#define PORTA		(*((volatile uint8_t_*)0x3B))


/************************************************************************/
/*							TIMER_REGISTERS								*/
/************************************************************************/

/********************************_TIMER0_REGISTERS_**********************************/
#define TCCR0		(*((volatile uint8_t_*)0x53))
#define FOC0		bit7
#define WGM00		bit6
#define COM01		bit5
#define	COM00		bit4
#define WGM01		bit3
#define CS02		bit2
#define	CS01		bit1
#define	CS00		bit0

#define TIMSK		(*((volatile uint8_t_*)0x59))			/*Timer/Counter Interrupt Mask Register*/
#define OCIE2		bit7
#define TOIE2		bit6
#define TICIE1		bit5
#define	OCIE1A		bit4
#define OCIE1B		bit3
#define TOIE1		bit2
#define	OCIE0		bit1
#define	TOIE0		bit0

#define TCNT0		(*((volatile uint8_t_*)0x52))

#define OCR0		(*((volatile uint8_t*)0x5C))

/********************************_TIMER1_REGISTERS_**********************************/
#define ICR1		(*((volatile uint16_t_*)0x46))
#define ICR1L		(*((volatile uint8_t_*)0x46))
#define ICR1H		(*((volatile uint8_t_*)0x47))

#define OCR1A		(*((volatile uint16_t_*)0x4A))
#define OCR1AL		(*((volatile uint8_t_*)0x4A))
#define OCR1AH		(*((volatile uint8_t_*)0x4B))
#define OCR1B		(*((volatile uint16_t_*)0x48))
#define OCR1BL		(*((volatile uint8_t_*)0x48))
#define OCR1BH 		(*((volatile uint8_t_*)0x49))


#define TCNT1		(*((volatile uint16_t_*)0x4C))
#define TCNT1L		(*((volatile uint8_t_*)0x4C))
#define TCNT1H		(*((volatile uint8_t_*)0x4D))

#define TCCR1		(*((volatile uint16_t_*)0x4E))
#define TCCR1A		(*((volatile uint8_t_*)0x4F))
#define TCCR1B		(*((volatile uint8_t_*)0x4E))
#define COM1A1		bit7
#define COM1A0		bit6
#define COM1B1		bit5
#define COM1B0		bit4
#define FOC1A		bit3
#define FOC1B		bit2
#define WGM11		bit1
#define WGM10		bit0
#define ICNC1		bit7
#define ICES1		bit6
#define WGM13		bit4
#define WGM12		bit3
#define CS12		bit2
#define	CS11		bit1
#define	CS10		bit0

/********************************_TIMER2_REGISTERS_**********************************/
#define TCCR2		(*((volatile uint8_t_*)0x45))
#define FOC2		bit7
#define WGM20		bit6
#define COM21		bit5
#define	COM20		bit4
#define WGM21		bit3
#define CS22		bit2
#define	CS21		bit1
#define	CS20		bit0

#define TCNT2		(*((volatile uint8_t_*)0x44))

#define OCR2		(*((volatile uint8_t_*)0x43))

/************************************************************************/
/*							STATUS_REGISTER								*/
/************************************************************************/
#define SREG		(*((volatile uint8_t_*)0x5F))			/*AVR Status Register*/
#define Ibit		bit7									/*Global Interrupt Enable*/

/************************************************************************/
/*						EXTERNAL_INTERRUPTS_REGISTERS					*/
/************************************************************************/
#define MCUCR		(*((volatile uint8_t_*)0x55))			/*MCU Control Register*/
#define ISC00		bit0
#define ISC01		bit1
#define ISC10		bit2
#define ISC11		bit3

#define MCUCSR		(*((volatile uint8_t_*)0x54))			/*MCU Control and Status Register*/
#define ISC2		bit6
#define WDRF		bit3

#define GICR		(*((volatile uint8_t_*)0x5B))			/*General Interrupt Control Register*/
#define INT1		bit7
#define INT0		bit6
#define INT2		bit5

#endif /* REGISTERS_H_ */