#include <stdio.h>
#include <stdlib.h>

//declaro el prototipo de la funcion

int sumarConLimite(int numero1, int numero2);//PROTOTIPO O FIRMA


int main(void)
{

    setbuf(stdout, NULL);

    int numeroUno;
    int numeroDos;
    int suma;


    printf("Ingrese un numero\n");
    scanf("%d", &numeroUno);
    printf("Ingrese otro numero\n");
    scanf("%d", &numeroDos);

    suma = sumarConLimite(numeroUno,numeroDos);
    printf("La suma es %d\n", suma);

    return 0;
}

//funciones auxiliares de mi programa

//Definicion de la funcion sumar con limites

//TIPO-NOMBRE DE FUNCION-(tipo y nombre del Argumento)

int sumarConLimite(int numero1, int numero2)//PROTOTIPO
{
    //codigo de mi funcion
    int resultado; //variable local de la funcion
    resultado = numero1 + numero2;
    if(resultado>100)
    {
        resultado = 100;
    }
    // retornar un valor;
    return resultado;

}
