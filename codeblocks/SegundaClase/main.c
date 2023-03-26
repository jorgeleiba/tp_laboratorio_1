/*
1Pedir cinco numeros y dar como resultado, maximo y minimo
2 pedir numeros y calcular maximo y minimo*/


#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
    int maximo;
    int minimo;
    int i;
    int numeroIngresado;
    int flag = TRUE;


    for(;;)
    {
        printf("Ingrese un numero, para finalizar ingrese '888'\n");
        scanf("%d", &numeroIngresado);
        if(flag == TRUE)
        {
            maximo = numeroIngresado;
            minimo = numeroIngresado;
            flag = FALSE;
        }
        else
        {
            if(numeroIngresado == 888)
            {
             break;
            }
                else
                    {
                    if(numeroIngresado > maximo)
                        {
                        maximo = numeroIngresado;
                        }
                    if(numeroIngresado < minimo)
                        {
                        minimo = numeroIngresado;
                        }
                    }
        }
    }



    printf("El valor maximo es %d\nEl valor minimo es %d\n", maximo, minimo);

    return 0;
}
