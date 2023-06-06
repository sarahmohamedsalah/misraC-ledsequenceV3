/*
 * button.h
 *
 * Created: 6/5/2023 12:06:22 PM
 *  Author: Sarah
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_


#include "../../MCAL/DIO/dio.h"

#define BUTTON_0_PORT	PORT_B
#define BUTTON_0_Pin	0
#define BUTTON_1_PORT	PORT_B
#define BUTTON_1_Pin	1
typedef enum buttonErrors{
	BUTTON_OK,
	WRONG_BUTTON_PORT,
	WRONG_BUTTON_PIN
}EN_buttonError_t;

EN_buttonError_t BUTTON_init(uint8_t_ buttonPort, uint8_t_ buttonPin);

EN_buttonError_t BUTTON_read(uint8_t_ buttonPort, uint8_t_ buttonPin, uint8_t_ *buttonState);




#endif /* BUTTON_H_ */