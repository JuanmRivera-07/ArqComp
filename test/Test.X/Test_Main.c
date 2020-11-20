
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
#include "Configuracion.h"
#include "Utilidades.h"



#define  LED_RED LATB
#define  LED_GREEN LATA

//#define __USER__

#ifdef __USER__ 
#define DELAY(a) MS_delay(a);
#else
#define DELAY(a) __MSdelay_ms(500);
#endif

void  main ()
{
    OSCCON = 0x72 ;        /* Utilice un oscilador interno de frecuencia de 8MHz */
    TRISB = 0x00 ;         /* Establecer la dirección de PORTB como SALIDA a la que se conecta el LED */
    while (1)
    {
        LED_RED = 0xff ;     /* Enciende el LED durante 500 ms */
        //MS_delay (500);
        __delay_ms(500);  /*Funcion para hacer retraso*/
        //DELAY(500);
        LED_RED = 0 ;        /* Apague el LED durante 500 ms */
        //MS_delay ( 500 );
        __delay_ms(500);
        //DELAY(500);
    }
}



