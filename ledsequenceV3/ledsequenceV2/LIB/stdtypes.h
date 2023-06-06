/*
 * stdtypes.h
 *
 * Created: 6/5/2023 11:59:17 AM
 *  Author: Sarah
 */ 


#ifndef STDTYPES_H_
#define STDTYPES_H_
#define nullPtr				((void*) 0)
/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef signed		char	sint8_t_;			/*-128 	to +127*/
typedef unsigned	char	uint8_t_;			/*  0 	to +255*/

typedef signed		short	sint16_t_;			/*-32768 to +32767*/
typedef unsigned	short	u16_t_;			/*   0   to +65535*/

typedef signed		long	sint32_t_;
typedef unsigned	long	uint32_t_;

typedef	float				float32_t_;
typedef	double				flaot64_t_;



#endif /* STDTYPES_H_ */