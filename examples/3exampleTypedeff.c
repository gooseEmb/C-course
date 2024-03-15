#include <stdio.h>
#include <complex.h>
enum colores{
    azul, amarillo, rojo, verde, blanco, negro
};
/*creamos la variable*/
typedef enum colores t_colores;

int main(int argc, char const *argv[])
{
    t_colores color = rojo;
    printf("%d",color);
        
    return 0;
}
