/*Escriba un programa que imprima los 10 primeros elementos de la serie
 de Fibonacci: f(0) = 0, f(1) = 1, f(2) = f(0) + f(1), ... , 
 f(i) = f(i-2) + f(i-1). Utilice una función serieFibonacci que 
 proporciona la serie de n elementos en una matriz unidimensional.*/
 #include <stdio.h>
void fibonacci(int a);
int main()
{
    fibonacci(20);
    return 0;
}


void fibonacci(int number){
    int a = 1, b =1, c;
    for (int i = 1; i < number ; i++)
    {
        printf ("%d ",a);
        c = a+b;
        a=b;
        b=c;
    }
    
}