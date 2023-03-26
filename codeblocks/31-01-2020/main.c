#include <stdio.h>

// PROTOTIPOS //
int sumaDeNumeros(int primerNumero,int segundoNumero);
int restaDeNumeros(int primerNumero,int segundoNumero);
int multiplacionDeNumeros(int primerNumero,int segundoNumero);
float divisionDeNumeros(int  primeroNumero,int segundoNumero);


// MAIN //
int main()
{
    int unNumero;
    int otroNumero;
    int resultadoEntero;
    float ResultadoFloat;


    printf("ingrese primer numero: ");
    scanf("%d",&unNumero);

    printf("ingrese segundo numero: ");
    scanf("%d",&otroNumero);

    resultadoEntero = sumaDeNumeros(unNumero,otroNumero);
    printf("la suma de los numeros es : %d \n", resultadoEntero);

    resultadoEntero = restaDeNumeros(unNumero,otroNumero);
    printf("la resta de los numeros es : %d \n", resultadoEntero);

    resultadoEntero = multiplacionDeNumeros(unNumero,otroNumero);
    printf("la multiplicacacion de los numeros es : %d \n", resultadoEntero);

    ResultadoFloat = divisionDeNumeros(unNumero,otroNumero);
    printf("la division de los numeros es : %f ", ResultadoFloat);





    return 0;
}

// FUNCIONES //

int sumaDeNumeros(int primerNumero,int segundoNumero)
{
    int suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

int restaDeNumeros(int primerNumero,int segundoNumero)
{
    int resta;
    resta = primerNumero - segundoNumero;
    return resta;
}

int multiplacionDeNumeros(int primeroNumero,int segundoNumero)
{
    int multiplicacion;
    multiplicacion = primeroNumero * segundoNumero;
    return multiplicacion;
}

float divisionDeNumeros(int  primeroNumero,int segundoNumero)
{
    float division;
    division = (float)primeroNumero/ segundoNumero;
    return division;
}


