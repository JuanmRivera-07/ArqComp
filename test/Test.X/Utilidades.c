#include "Utilidades.h"

void  MS_delay ( unsigned  int val)
{
 unsigned  int i, j;
 for (i = 0 ; i <val; i ++)
     for (j = 0 ; j < 165 ; j ++);  /* Este recuento proporciona un retardo de 1 ms para una frecuencia de 8 MHz */
} 
