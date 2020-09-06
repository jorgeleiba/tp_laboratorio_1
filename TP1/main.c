/*

LEIBA JORGE LUIS

1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
*/


#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
   int opcion;
   float A;
   float B;
   float resultadoSuma;
   float resultadoResta;
   float resultadoDivision;
   float resultadoMultiplicacion;
   float resultadoFactorialA;
   float resultadoFactorialB;
   float resultado;
   int banderaA;
   int banderaB;
   int banderaCalculos;

   A = 0;
   B = 0;
   banderaA = 0;
   banderaB = 0;
   banderaCalculos = 0;


   do
   {
       printf("\n1.Ingresar primer operando A = %.2f", A);
       printf("\n2.Ingresar segundo operando B = %.2f", B);
       printf("\n3.Realizar calculos\n4.Mostrar resultados\n5.Salir\n");
       printf("\nElija una opcion: ");
       scanf("%d", &opcion);

       switch(opcion)
       {
            case 1:

               A = funcionPedirNumero(&A);
               banderaA = 1;
            break;

            case 2:

                if(banderaA == 1)
                {
                    B = funcionPedirNumero(&B);
                    banderaB = 1;
                }
                else
                {
                    printf("Ingrese el primer operando\n");
                }
            break;

            case 3:

                if(banderaA == 1 && banderaB == 1)
                {
                    printf("Los calculos se realizaron exitosamente\n");

                    resultadoSuma = funcionSumar(A, B);
                    resultadoResta = funcionRestar(A, B);
                    resultadoDivision = funcionDividir(&resultado, A, B);
                    resultadoMultiplicacion = funcionMultiplicar(A, B);
                    resultadoFactorialA = funcionFactorial(A);
                    resultadoFactorialB = funcionFactorial(B);
                    banderaCalculos = 1;
                }
                else
                {
                    printf("\nPara realizar los calculos primero debe ingresar los operandos\n");
                }
            break;

            case 4:

                if(banderaCalculos == 1)
                {
                    printf("Los resultados son: \n");
                    printf("\na) El resultado de A+B es: %.2f\n", resultadoSuma);
                    printf("b) El resultado de A-B es: %.2f\n", resultadoResta);

                    if(resultadoDivision == 0)
                    {
                        printf("c) El resultado de A/B es: %.2f\n", resultado);
                    }
                    else
                    {
                        printf("c) Error. No es posible dividir por cero\n");
                    }
                    printf("d) El resultado de A*B es: %.2f\n", resultadoMultiplicacion);
                    printf("e) El factorial de A es: %.0f y El factorial de B es: %.0f\n", resultadoFactorialA, resultadoFactorialB);
                }
                else
                {
                    printf("\nPara mostrar los resultados primero debe realizar los calculos\n");
                }
            break;

            case 5:
               printf("Terminado");
            break;

            default:
                printf("No es una entrada valida\n");
       }


   }while(opcion != 5);

   return 0;
}
