#include <stdio.h>
extern int var; /* declaración de var. Referencia a la variable var
definida en el archivo uno.c */
void funcion_2(void)
{
var++;
printf("%d\n", var); /* se escribe 8 */
}
