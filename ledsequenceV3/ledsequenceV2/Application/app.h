/*
 * app.h
 *
 * Created: 6/5/2023 12:15:39 PM
 *  Author: Sarah
 */ 


#ifndef APP_H_
#define APP_H_


#define F_CPU	16000000UL

//#include <util/delay.h>
#include "../MCAL/Timer/timer_interface.h"
#include "../MCAL/Timer/timer_cfg.h"
#include "../MCAL/EXInt/extint.h"
#include "../ECUAL/Button/Button.h"
#include "../ECUAL/LED/led.h"


void APP_init(void);

void APP_ledSequenceV_3 (void);


void button0Task (uint8_t_* counter, uint8_t_ state);
void button1Task(void);





#endif /* APP_H_ */