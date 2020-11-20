
/*!
\file   Secuencia_Main.c
\date   2020-11-19
\author Juan Manuel Rivera <juanmanriv@unicauca.edu.co>
\brief  Example Secuencia_Main.

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
#include "Pinout.h"
#include "Secuencia_Main.h"

#define INPUT 1 //Entrada
#define OUTPUT 0    //Salida

#define HIGH 1 //alto
#define LOW 0 //bajo

int main(void) {
    TRISD = 0;
    LATD = 0;
    efecto_pin = INPUT;
    velocidad_pin = INPUT;
    INTCON2bits.RBPU = 0;
    while (1) {
        //efecto
        if (!efecto_value) {
            __delay_ms(50);
            if(++efecto==5){efecto=1;}
        }
        
        switch (efecto) {
            case 1: secuencial_Efecto1();
                break;
            case 2: secuencial_Efecto2();
                break;
            case 3: secuencial_Efecto3();
                break;
            case 4: secuencial_Efecto4();
                break;
        }
    }
    return 1;
}

void secuencial_Efecto1(void) {
    for (int i = 0; i < 8; i++) {
        LATD = 1 << i;
        velocidad_efecto(velocidad);
    }
}

void secuencial_Efecto2(void) {
    for (int i = 0, j = 7; i < 8; i++, j--) {
        LATD = (1 << i) + (1 << j);
        velocidad_efecto(velocidad);
    }
}

void secuencial_Efecto3(void) {
    for (int i = 0; i < 9; i++) {
        LATD = (1 << i) - 1;
          velocidad_efecto(velocidad);
    }
}

void secuencial_Efecto4(void) {
    volatile unsigned int m=0,n=0;
    for (int i = 0; i < 5; i++) {
        LATD = m+n;
        m += (1 << i) & 0x0f;
        n += (1 << (7-i)) & 0xf0;
        velocidad_efecto(velocidad);
    }
}
void velocidad_efecto(unsigned  int p_velocidad){ //Metodo que determina la velocidad y resive la lectura
        if(p_velocidad==1){__delay_ms(50);}         //del efecto.
        else if(p_velocidad==2){__delay_ms(100);}
        else if(p_velocidad==3){__delay_ms(200);}
        else if(p_velocidad==4){__delay_ms(400);}
        //velocidad
        if (!PORTBbits.RB6) {
            __delay_ms(50);
            if(++p_velocidad==5){p_velocidad=1;}
        }
}

//void limpiador_rebotes(){
//    unsigned char efecto = 1;
//    if(!efecto_value){
//        __delay_ms(1000);
//        if(!efecto_value){
//            
//        }
//    }
//}