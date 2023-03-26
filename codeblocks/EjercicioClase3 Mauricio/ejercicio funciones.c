/*
1 programa que pida un numero al usuario, despues que pida una operacion (+ - / *)
y despues que pida otro numero. Segun la operacion ingresada se llamara a la funcion
que ejecute la operacion*/

#include <stdio.h>
#include <stdlib.h>

    int multiplicar(int numeroUno, int numeroDos);
    float dividir(int numeroUno, int numeroDos);
    int sumar(int numeroUno, int numeroDos);
    int restar(int numeroUno, int numeroDos);


int main ()
{
    int primerNumero;
    int segundoNumero;
    char operacion;
    int resultado;
    float resultadoFloat;

    printf("Ingrese el primer numero \n");
    scanf("%d", &primerNumero);

    printf("Ingrese el tipo de operacion: sumar(s), restar(s), multiplicar(m), dividir(d) \n");
    fflush(stdin);
    scanf("%c", &operacion);

    printf("Ingrese el segundo numero \n");
    scanf("%d", &segundoNumero);



    switch(operacion)
    {
        case 's':
            {
            resultado = sumar(primerNumero, segundoNumero);
            }
            break;
        case 'r':
            {
            resultado = restar(primerNumero, segundoNumero);
            }
            break;
        case 'm':
            {
            resultado = multiplicar(primerNumero, segundoNumero);
            }
            break;
        case 'd':
            {
            resultadoFloat = (float)dividir(primerNumero, segundoNumero);
            }
            break;
        default:
            printf("Error. No es una operacion valida\n");
            break;
    }

    if(operacion == 'd')
        {
        printf("El resultado es %.2f\n", resultadoFloat);
        }
    else
        {
        printf("El resultado es: %d\n", resultado);
        }
    return 0;
}

    int multiplicar(int numeroUno, int numeroDos)
        {
        int resultado;
        resultado = numeroUno * numeroDos;
        return resultado;
        }

    float dividir(int numeroUno, int numeroDos)
        {
        float resultado;
        resultado = (float)numeroUno / numeroDos;
        return resultado;
        }
    int sumar(int numeroUno, int numeroDos)
        {
        int resultado;
        resultado = numeroUno + numeroDos;
        return resultado;

        }
    int restar(int numeroUno, int numeroDos)
        {
        int resultado;
        resultado = numeroUno - numeroDos;
        return resultado;

        }


