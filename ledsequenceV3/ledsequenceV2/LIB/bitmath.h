/*
 * bitmath.h
 *
 * Created: 6/5/2023 11:58:56 AM
 *  Author: Sarah
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_

#define	SET_BIT(Reg,BitNo)		(Reg |= (1<<BitNo))
#define	CLR_BIT(Reg,BitNo)		(Reg &= (~(1<<BitNo)))
#define TGL_BIT(Reg,BitNo)		(Reg ^= (1<<BitNo))
#define GET_BIT(Reg,BitNo)		(1   &  (Reg>>BitNo))



#endif /* BITMATH_H_ */