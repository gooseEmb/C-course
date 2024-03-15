#include <stdio.h>
/*un enum cada valor esta asociados con un numero
ejemplo azul esta asociado con el numero 0
amarillo = 1        rojo    = 2
verde    = 3        blanco  = 4
*/
enum colores{
    azul, amarillo, rojo, verde, blanco, negro
};

int main(int argc, char const *argv[])
{
    enum colores color;
    printf("Color: ");
    scanf("%d", &color);
    printf("%d\n", color);
    if(color == verde) printf("esperanza\n");
    return 0;
}
/*SALIDA
Color: 3
3
esperanza
*/