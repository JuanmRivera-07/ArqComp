/*!
\file   Secuencia_Main.c
\date   2020-11-19
\author Juan Manuel Rivera <juanmanriv@unicauca.edu.co>
\brief  Example Cabecera seucencia_main.

\par Copyright
Information contained herein is proprietary to and constitutes valuable
confidential trade secrets of unicauca, and
is subject to restrictions on use and disclosure.

\par
Copyright (c) unicauca 2020. All rights reserved.

\par
The copyright notices above do not evidence any actual or
intended publication of this material.
******************************************************************************
*/

#ifndef SECUENCIA_MAIN_H
#define	SECUENCIA_MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif
unsigned char efecto = 1;
unsigned long velocidad = 1;

void secuencial_Efecto1(void);
void secuencial_Efecto2(void);
void secuencial_Efecto3(void);
void secuencial_Efecto4(void);
void velocidad_efecto(unsigned  int p_velocidad);



#ifdef	__cplusplus
}
#endif

#endif	/* SECUENCIA_MAIN_H */

