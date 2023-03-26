#include <stdio.h>
#include <stdlib.h>

int utn_NumeroEntero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
    int retorno = -1;
    int bufferInt;

    if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
    {
        do
        {

            printf("%s", mensaje);
            scanf("%d", &bufferInt);
            if(bufferInt >= minimo && bufferInt <= maximo)
            {
                *pResultado = bufferInt;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s", mensajeError);
                reintentos--;
            }
        }while(reintentos >= 0);
    }
    return retorno;
}

int utn_Caracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
    int retorno = -1;
    char bufferChar;

    if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
    {
        do
        {

            printf("%s", mensaje);
            fflush(stdin);
            scanf("%c", &bufferChar);
            if(bufferChar >= 'A' && bufferChar <= 'Z')
            {
                *pResultado = bufferChar;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s", mensajeError);
                reintentos--;
            }
        }while(reintentos >= 0);
    }
    return retorno;
}

int utn_NumeroFlotante(int* pResultado, char* mensaje, char* mensajeError, int numeroUno, int numeroDos)
{
     int retorno = -1;
    char numeroFloat;

    if(pResultado != NULL && mensaje != NULL && mensajeError != NULL)
    {
      do
        {

            printf("%f", mensaje);
            scanf("%f", &numeroFloat);
            if(numeroFloat >= 'A' && numero <= 'Z')
            {
                *pResultado = numeroFloat;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s", mensajeError);
                reintentos--;
            }
        }while(reintentos >= 0);
    }
    return retorno;
}
