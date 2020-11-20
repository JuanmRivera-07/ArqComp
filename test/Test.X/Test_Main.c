
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
#include "Utilidades.h"

#define LED LATB

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


//#define __USER__
//
//#ifdef __USER__ 
//#define DELAY(a) MSdelay(a);
//#else
//#define DELAY(a) __MSdelay_ms(500);
//#endif
