/*
 * dio.c
 *
 * Created: 6/5/2023 12:03:12 PM
 *  Author: Sarah
 */ 


#include "dio.h"

EN_dioError_t DIO_init(uint8_t_ portNumber, uint8_t_ pinNumber, uint8_t_ direction)	// Initialize dio direction
{
	EN_dioError_t error = DIO_OK;
	if (pinNumber < 8)
	{
		
		switch(direction)
		{
			case INPUT:
			switch(portNumber)
			{
				case PORT_A:	DDRA &= ~ (1<<pinNumber);	break;
				case PORT_B:	DDRB &= ~ (1<<pinNumber);	break;
				case PORT_C:	DDRC &= ~ (1<<pinNumber);	break;
				case PORT_D:	DDRD &= ~ (1<<pinNumber);	break;
				default:		error = WRONG_PORT_NUMBER;	break;
			}
			break;
			
			case OUTPUT:
			switch(portNumber)
			{
				case PORT_A:	DDRA |= (1<<pinNumber);		break;
				case PORT_B:	DDRB |= (1<<pinNumber);		break;
				case PORT_C:	DDRC |= (1<<pinNumber);		break;
				case PORT_D:	DDRD |= (1<<pinNumber);		break;
				default:		error = WRONG_PORT_NUMBER;	break;
			}
			break;
			
			default:
			error = WRONG_DIRECTION;
			break;
		}
		
	}
	else
	{
		error = WRONG_PIN_NUMBER;
	}
	return error;
}

EN_dioError_t DIO_write(uint8_t_ portNumber, uint8_t_ pinNumber, uint8_t_ value)		// Write data to dio
{
	EN_dioError_t error = DIO_OK;
	if (pinNumber < 8)
	{
		switch(value)
		{
			case LOW:
			switch(portNumber)
			{
				case PORT_A:	PORTA &= ~ (1<<pinNumber);		break;
				case PORT_B:	PORTB &= ~ (1<<pinNumber);		break;
				case PORT_C:	PORTC &= ~ (1<<pinNumber);		break;
				case PORT_D:	PORTD &= ~ (1<<pinNumber);		break;
				default:		error = WRONG_PORT_NUMBER;		break;
			}
			break;
			
			case HIGH:
			switch(portNumber)
			{
				case PORT_A:	PORTA |= (1<<pinNumber);		break;
				case PORT_B:	PORTB |= (1<<pinNumber);		break;
				case PORT_C:	PORTC |= (1<<pinNumber);		break;
				case PORT_D:	PORTD |= (1<<pinNumber);		break;
				default:		error = WRONG_PORT_NUMBER;		break;
			}
			break;
			
			default:
			error = WRONG_VALUE;
			break;
		}
	}
	else
	{
		error = WRONG_PIN_NUMBER;
	}
	return error;

}

EN_dioError_t DIO_toggle(uint8_t_ portNumber, uint8_t_ pinNumber)						// Toggle dio
{
	EN_dioError_t error = DIO_OK;
	if (pinNumber < 8)
	{
		switch(portNumber)
		{
			case PORT_A:	TGL_BIT(PORTA,pinNumber);		break;
			case PORT_B:	TGL_BIT(PORTB,pinNumber);		break;
			case PORT_C:	TGL_BIT(PORTC,pinNumber);		break;
			case PORT_D:	TGL_BIT(PORTD,pinNumber);		break;
			default:		error = WRONG_PORT_NUMBER;		break;
		}
	}
	else
	{
		error = WRONG_PIN_NUMBER;
	}
	return error;
}
EN_dioError_t DIO_read(uint8_t_ portNumber, uint8_t_ pinNumber, uint8_t_ *value)		// Read dio
{
	EN_dioError_t error = DIO_OK;
	if (pinNumber < 8)
	{

		switch(portNumber)
		{
			case PORT_A:	*value = GET_BIT(PINA,pinNumber);		break;
			case PORT_B:	*value = GET_BIT(PINB,pinNumber);		break;
			case PORT_C:	*value = GET_BIT(PINC,pinNumber);		break;
			case PORT_D:	*value = GET_BIT(PIND,pinNumber);		break;
			default:		error = WRONG_PORT_NUMBER;				break;
		}
	}
	else
	{
		error = WRONG_PIN_NUMBER;
	}
	return error;
}