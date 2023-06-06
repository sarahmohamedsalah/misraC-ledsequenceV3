/*
 * button.c
 *
 * Created: 6/5/2023 12:06:33 PM
 *  Author: Sarah
 */ 
#include "button.h"


EN_buttonError_t BUTTON_init(uint8_t_ buttonPort, uint8_t_ buttonPin)
{
	EN_buttonError_t error = BUTTON_OK;
	if (buttonPort > PORT_D)
	{
		error = WRONG_BUTTON_PORT;
	}
	else if (buttonPin > 7)
	{
		error = WRONG_BUTTON_PIN;
	}
	else
	{
		DIO_init(buttonPort, buttonPin, INPUT);
		error = BUTTON_OK;
	}
	
	return error;
}

EN_buttonError_t BUTTON_read(uint8_t_ buttonPort, uint8_t_ buttonPin, uint8_t_ *buttonState)
{
	EN_buttonError_t error = BUTTON_OK;
	if (buttonPort > PORT_D)
	{
		error = WRONG_BUTTON_PORT;
	}
	else if (buttonPin > 7)
	{
		error = WRONG_BUTTON_PIN;
	}
	else
	{
		DIO_read(buttonPort, buttonPin, buttonState);
		error = BUTTON_OK;
	}
	
	return error;
}