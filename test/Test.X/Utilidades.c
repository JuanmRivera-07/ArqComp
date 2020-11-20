#include "Utilidades.h"

/* F ********************************************* ***************************
* NOMBRE: MS_delay
* ------------------------------------------------- ---------------------------
* PARAMES:
* val: retraso en milisegundos
* retorno: ninguno
* ------------------------------------------------- ---------------------------
* PROPÓSITO:
* Establecer un retraso en milisegundos
* ------------------------------------------------- ---------------------------
* NOTA:
* 9
************************************************ ************************** */

void  Ms_delay ( unsigned  int val)
{
 unsigned  int i, j;
 for (i = 0 ; i <val; i ++)
     for (j = 0 ; j < 165 ; j ++);  /* Este recuento proporciona un retardo de 1 ms para una frecuencia de 8 MHz */
} 
