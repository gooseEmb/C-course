#include <stdio.h>
#include <stdint.h> 
#include <stdbool.h>
/*tipos de variables primitivas*/
char    value1; //entre -128 a +127     1byte
char    car1 = 'a';     //"a" interpretado como caracter
char    car2 = 97;      //"a" en decimal
char    car3 = 0x60;    //"a" en hexadecimal
char    car4 = 0141;     //"a" en octal

long long value;
short   value2; //entre 
int     value3;
long    value4;
/**************************enum**********************/
enum    value5{
    azul, amarillo, rojo, verde, blanco, negro
};
enum value5 color;  //crear una variable color1
color = azul;       //asigno un valor a la variable
/****************************************************/
/*variables reales*/
float       value6;
double      value7;
long double value8;
/*variables calificadas*/
unsigned int    value9;
signed long    value10;
/*variable booleana*/
bool flag = true;
/*variable sin tipo de dato es considerado int*/
//unsigned int mi_value_int; es igual a
unsigned mi_value_int; 

int main(){;
    


    return 0;
}