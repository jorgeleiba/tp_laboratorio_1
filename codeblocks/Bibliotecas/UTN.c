#include <stdio.h>
#include <stdlib.h>


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
