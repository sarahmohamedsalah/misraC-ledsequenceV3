/*
 * ledsequenceV2.c
 *
 * Created: 6/5/2023 1:07:17 PM
 * Author : Sarah
 */ 

#include <avr/io.h>

#include "Application/app.h"
int main(void)
{
    APP_init();
    while (1) 
    {
		APP_ledSequenceV_3 ();
		
    }
}

