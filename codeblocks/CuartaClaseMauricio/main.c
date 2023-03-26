#include <stdio.h>
#include <stdlib.h>
#include "GetNumero.h"

int main(void)
{
    int edad;
    int peso;
    char letra;
    int respuesta;


    respuesta = utn_Caracter(&letra, "Ingrese una letra\n", "Error, rango aceptable  A a Z\n", 'A','Z',3);
    if(respuesta == 0)
    {
        printf("La letra es %c\n", letra);
    }
    else
    {
     printf("Error\n");
    }

    respuesta = utn_NumeroEntero(&edad, "Ingrese su edad \n", "Error, rango aceptable  de 0 a 110\n", 0,110,2);
    if(respuesta == 0)
    {
        printf("La edad es %d\n", edad);
    }
    else
    {
     printf("Error\n");
    }

    respuesta = utn_NumeroEntero(&peso, "Ingrese su peso\n", "Error, rango aceptable  de 0 a 200\n", 0,200,3);
    if(respuesta == 0)
    {
        printf("El peso es %d\n", peso);
    }
    else
    {
     printf("Error\n");
    }
    return 0;
}
