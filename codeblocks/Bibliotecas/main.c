#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"


int main()
{
    int numero1;
    int numero2;
    float resultado;
    int respuesta;

    printf("Ingrese el primer numero \n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero \n");
    scanf("%d", &numero2);

    respuesta = dividir(&resultado, numero1, numero2);

    //con &resultado obtengo la direccion de memoria

    if(respuesta == 0)
    {
        printf("El resultado es %.2f\n", resultado);
    }
    else
    {
        printf("No es posible dividir por cero\n");
    }
    return 0;
}



