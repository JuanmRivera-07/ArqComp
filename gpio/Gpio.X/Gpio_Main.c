/*!
\file   Gpio_Main.c
\date   2020-11-19
\author Juan Manuel Rivera <juanmanriv@unicauca.edu.co>
\brief  Example Gipio.

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
#include <xc.h>
#include <pic18f4550.h>  /*Header file PIC18f4550 definitions*/
#include "Fuses.h"

#define INPUT 1
#define OUTPUT 0

#define s1 TRISBbits.TRISB7
#define s2 TRISBbits.TRISB6
#define s3 TRISBbits.TRISB5
#define s4 TRISBbits.TRISB4

#define s1_read PORTBbits.RB7
#define s2_read PORTBbits.RB6
#define s3_read PORTBbits.RB5
#define s4_read PORTBbits.RB4

#define ON_LED 1
#define OFF_LED 0


int main(void) {
    OSCCON=0x72;       /* Use internal oscillator of 8MHz Frequency */
    //Configura los pines RD7-RD6-RD5-RD4 como salida digital
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD4 = 0;
    //Configura los pines RB7-RB6-RB5-RB4 como entrada digital
    s1 = INPUT;
    s2 = INPUT;
    s3 = INPUT;
    s4 = INPUT;

    while (1) {
        if(!s4_read){LATDbits.LATD4=1;}else{LATDbits.LATD4=0;}
        if(!s3_read){LATDbits.LATD5=1;}else{LATDbits.LATD5=0;}
        if(!s2_read){LATDbits.LATD6=1;}else{LATDbits.LATD6=0;}
        if(!s1_read){LATDbits.LATD7=1;}else{LATDbits.LATD7=0;}
    }
    return 1;
}

