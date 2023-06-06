/*
 * led.h
 *
 * Created: 6/5/2023 12:13:56 PM
 *  Author: Sarah
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO/dio.h"

#define LED_0_PORT		PORT_A
#define LED_1_PORT		PORT_A
#define LED_2_PORT		PORT_A
#define LED_3_PORT		PORT_A
#define LED_0_PIN		0
#define LED_1_PIN		1
#define LED_2_PIN		2
#define LED_3_PIN		3

typedef enum ledErrors{
	LED_OK,
	WRONG_LED_PORT,
	WRONG_LED_PIN
}EN_ledError_t;



EN_ledError_t LED_init(uint8_t_ ledPort,uint8_t_ ledPin);

EN_ledError_t LED_on(uint8_t_ ledPort,uint8_t_ ledPin);

EN_ledError_t LED_off(uint8_t_ ledPort,uint8_t_ ledPin);

EN_ledError_t LED_toggle(uint8_t_ ledPort,uint8_t_ ledPin);




#endif /* LED_H_ */