/* salida01.c
*/
#include <stdio.h>
int main(void)
{
    int a = 12345;

    float b = 54.865F;
    printf("%d\n", a); /* escribe 12345\n */
    printf("\n%10s\n%10s\n", "abcdefghijkl", "abcdefghijkl"); 
    printf("\n%-10s\n%-10s\n", "abcdefghijkl", "abcdefghijkl");
    printf("\n"); /* avanza a la siguiente línea */
    printf("%.2f\n", b); /* escribe b con dos decimales */
    return 0;
}
