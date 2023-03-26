/*
Programa ejemplo clase 3

Objetivo:
- Crear una función que permita al usuario ingresar un numero y luego lo reetorne.
- Crear una funcion que reciba el radio de un círculo y retorne su area.
- Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule
el area de un circulo cuyo radio es ingresado por el usuario.
-Documentar las funciones al estilo Doxigen
Aspectos a destacar:
- Declaracion de funciones que reciben y devuelven valores
- Hacer notar que el uso de funciones evita el codigo repetido y ayuda
a que el mismo sea mas legible.
- La funcion deberia comenzar indicando el objetivo que persigue y el significado
de sus parametros.
*/

#include <stdio.h>
#include <stdlib.h>

    float PedirNumero ();
    float CalcularAreaCirculo (float radio);



    int main()
    {
        float numeroIngresado;
        float area;

        numeroIngresado = PedirNumero();
        area = CalcularAreaCirculo (numeroIngresado);
        printf("El area de un circulo es: %.2f\n", area);
        return 0;
    }

      /**
      * \brief : solicita un numero y lo retorna
      * \return : numero ingresado por el usuario
      */


    float PedirNumero ()
    {
        float numero;
        printf("Ingrese un numero: \n");
        scanf("%f", &numero);
        return numero;
    }

    /**
    * \ brief: recibe el dato del radio y calcula el area del circulo
    * \ param: radio correspondiente al circulo
    * \ return: area del circulo
    */

    float CalcularAreaCirculo (float radio)
    {
        float resultado;
        resultado = 3.14 * radio * radio;
        return resultado;
    }
