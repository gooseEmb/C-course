/*ESTRUCTURA DE UN PROGRAMA*/
/******Directrices para el preprocesador******/
#include <stdio.h>//funcion estandar de c
/*******************************************/
/*definicion de constantes*/
#define INF -30
#define SUP 100
/**************************/
/*declaracion de funciones*/
float convertir(int c); //PROTOTIPO DE FUNCION
float funcion_x(void);
void funcion_x2(int r);
/************************/
/*Declaraciones de variables globales*/
int calll=0;
/***********************************/
int main()
{
    /*Declaraciones de variables locales*/
    int nGradosCentigrados = 0;
    int incremento = 6; /* iniciar incremento con el valor 6 */
    float GradosFahrenheit = 0;
    nGradosCentigrados = INF; /* sentencia de asignación */

    while (nGradosCentigrados<=SUP)
    {
        /* Se llama a la función convertir */
        GradosFahrenheit = convertir(nGradosCentigrados);
        /* Se escribe la siguiente línea de la tabla */
        printf("%10d C %10.2f F\n", nGradosCentigrados, GradosFahrenheit);
        /* Siguiente valor a convertir */
        nGradosCentigrados += incremento;  
    }
    
}/* fin de la función principal y del programa */



/************** Definición de la función convertir **************/
float convertir(int gcent){
    /* Declaración de variables locales */
    float gfahr; /* variable local accesible solamente aquí,
                    en la función */
    /* Los operandos son convertidos al tipo del operando de
    precisión más alta (float) */
    gfahr = (float)9 / (float)5 * gcent + 32;
    return (gfahr); /* valor que retorna la función convertir */
} /* Fin de la función de convertir */


/**funcion sin parametros*/
float funcion_x(void);

/*funcion no devuelve nada*/
void funcion_x2(int r);