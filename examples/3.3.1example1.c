# include <stdio.h>

void funcion_1();
void funcion_2();
extern int var;
int main(void)
{
    var++;
    printf("%d\n", var);
    funcion_1();
}
int var = 5; 
void funcion_1(){
    var++;
    printf("%d\n", var); /* se escribe 7 */
    funcion_2();
}