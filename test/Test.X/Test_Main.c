
/* !
\ archivo Test_Main.c
\ fecha 2020-11-18
\ autor Juan Manuel Rivera <juanmanriv@unicauca.edu.co>
\ breve Ejemplo de prueba pic18f4550.
\ par Copyright
La información aquí contenida es propiedad de y constituye valiosa
secretos comerciales confidenciales de unicauca, y
está sujeto a restricciones de uso y divulgación.
\par
Copyright (c) unicauca 2020. Todos los derechos reservados.
\par
Los avisos de derechos de autor anteriores no evidencian ningún
publicación prevista de este material.
************************************************ ****************************
*/

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include <pic18f4550.h>
#include <xc.h>
#include "Configuracion.h"

#define LED LATB
void MS_delay(unsigned int);
void  main ()
{
    OSCCON = 0x72 ;        /* Utilice un oscilador interno de frecuencia de 8MHz */
    TRISB = 0x00 ;         /* Establecer la dirección de PORTB como SALIDA a la que se conecta el LED */
    while (1)
    {
        LED = 0xff ;     /* Enciende el LED durante 500 ms */
        //MSdelay (500);
        __delay_ms(500);  /*Funcion para hacer retraso*/
        LED = 0 ;        /* Apague el LED durante 500 ms */
        //MSdelay ( 500 );
        __delay_ms(500);
    }
}
void  MS_delay ( unsigned  int val)
{
 unsigned  int i, j;
 for (i = 0 ; i <val; i ++)
     for (j = 0 ; j < 165 ; j ++);  /* Este recuento proporciona un retardo de 1 ms para una frecuencia de 8 MHz */
} 

//#define __USER__
//
//#ifdef __USER__ 
//#define DELAY(a) MSdelay(a);
//#else
//#define DELAY(a) __MSdelay_ms(500);
//#endif
