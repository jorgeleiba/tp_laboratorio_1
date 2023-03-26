#include <stdio.h>
#include <stdlib.h>

int dividir(float* pResultado,int numeroUno,int numeroDos);

//con float* pResultado puedo leer o escribir el valor que guardé en la dirección de memoria

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
        printf("El resultado es %f\n", resultado);
    }
    else
    {
        printf("No es posible dividir por cero\n");
    }
    return 0;
}

int dividir(float* pResultado,int numeroUno,int numeroDos)
{
    float resultadoDivision;
    int retorno = -1;

    if(pResultado != NULL && numeroDos != 0)
    {
        resultadoDivision = (float)numeroUno / numeroDos;
        *pResultado = resultadoDivision;
        retorno = 0;
    }

    return retorno;
}
