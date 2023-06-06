/*
 * led.c
 *
 * Created: 6/5/2023 12:13:44 PM
 *  Author: Sarah
 */ 
#include "led.h"


EN_ledError_t LED_init(uint8_t_ ledPort,uint8_t_ ledPin)
{
	EN_ledError_t error = LED_OK;
	if (ledPort > PORT_D)
	{
		error = WRONG_LED_PORT;
	}
	else if (ledPin > 7)
	{
		error = WRONG_LED_PIN;
	}
	else
	{
		DIO_init(ledPort, ledPin, OUTPUT);
		error = LED_OK;
	}
	
	return error;
}

EN_ledError_t LED_on(uint8_t_ ledPort,uint8_t_ ledPin)
{
	EN_ledError_t error = LED_OK;
	if (ledPort > PORT_D)
	{
		error = WRONG_LED_PORT;
	}
	else if (ledPin > 7)
	{
		error = WRONG_LED_PIN;
	}
	else
	{
		DIO_write(ledPort,ledPin, HIGH);
		error = LED_OK;
	}
	
	return error;
}

EN_ledError_t LED_off(uint8_t_ ledPort,uint8_t_ ledPin)
{
	EN_ledError_t error = LED_OK;
	if (ledPort > PORT_D)
	{
		error = WRONG_LED_PORT;
	}
	else if (ledPin > 7)
	{
		error = WRONG_LED_PIN;
	}
	else
	{
		DIO_write(ledPort,ledPin, LOW);
		error = LED_OK;
	}
	
	return error;
}
EN_ledError_t LED_toggle(uint8_t_ ledPort,uint8_t_ ledPin)
{
	EN_ledError_t error = LED_OK;
	if (ledPort > PORT_D)
	{
		error = WRONG_LED_PORT;
	}
	else if (ledPin > 7)
	{
		error = WRONG_LED_PIN;
	}
	else
	{
		DIO_toggle(ledPort, ledPin);
		error = LED_OK;
	}
	
	return error;
}