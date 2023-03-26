/*
Leiba Jorge Luis

Ejercicio 01:
Se pide una cantidad indeterminada de edades enteras,
informar:
el máximo ingresado
el mínimo ingresado
el promedio
la cantidad de edades ingresadas

Ejercicio 02:
Al ejercicio anterior :
Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
ademas de informar lo anterior ....informar:
la persona mas joven de las casadas
a persona mas Vieja de las solteras
de los estados civiles , cual fue el mas ingresado*/


#include <stdio.h>

int main()
{
    int edad;
    char estadoCivil;
    char nombre;
    int edadMaximaIngresada;
    int edadMinimaIngresada;
    int banderaEdad;
    float promedioEdad;
    int contadorEdades;
    int acumuladorEdades;
    char seguir;
    char casadaMasJoven;
    char solteraMasVieja;
    int contadorCasadas;
    int contadorDivorciadas;
    int contadorSolteras;
    int edadMinimaCasadas;
    int edadMaximaSolteras;

    banderaEdad = 0;
    contadorEdades = 0;
    acumuladorEdades = 0;
    contadorCasadas = 0;
    contadorDivorciadas = 0;
    contadorSolteras = 0;
    seguir = 's';


    while(seguir == 's')
    {
        //edad
        printf("Ingrese edad entre 1 y 100: \n");
        scanf("%d", &edad);
        while(edad < 1 || edad > 100)
        {
        printf("Edad inválida. Ingrese edad entre 1 y 100: \n");
        scanf("%d", &edad);
        }
        //estadoCivil
        printf("Ingrese su estado civil: 's' para soltera , 'c' para casada, 'd' divorciada \n");
        fflush(stdin);
        scanf("%c", &estadoCivil);
        while(!(estadoCivil == 'c' || estadoCivil == 'd' || estadoCivil == 's'))
        {
        printf("Error. Ingrese su estado civil: 's' para soltera , 'c' para casada, 'd' divorciada \n");
        fflush(stdin);
        scanf("%c", &estadoCivil);
        }
        //nombre
        printf("Ingrese la inicial de su nombre: \n");
        fflush(stdin);
        scanf("%c", &nombre);

        contadorEdades++;
        acumuladorEdades += edad;

        if(banderaEdad == 0 || edad < edadMinimaIngresada)
        {
            edadMinimaIngresada = edad;
        }
        if(banderaEdad == 0 || edad > edadMaximaIngresada)
        {
            edadMaximaIngresada = edad;
        }

        banderaEdad = '1';

        switch(estadoCivil)
        {
            case 'c':
                if(edad < edadMinimaCasadas)
                {
                    contadorCasadas++;
                    edadMinimaCasadas = edad;
                    casadaMasJoven = nombre;
                }
            break;
            case 's':
                if(edad > edadMaximaSolteras)
                {
                    contadorSolteras++;
                    edadMaximaSolteras = edad;
                    solteraMasVieja = nombre;
                }
            break;
            case 'd':
                    contadorDivorciadas++;
            break;
        }

        printf("Desea seguir Ingresando datos? s o n: \n");
        fflush(stdin);
        scanf("%c", &seguir);
        while(seguir != 's' && seguir != 'n')
        {
        printf("Desea seguir Ingresando datos? s o n: \n");
        fflush(stdin);
        scanf("%c", &seguir);
        }
    }

    promedioEdad = (float)acumuladorEdades/contadorEdades;


    printf("La edad maxima ingresada es: %d\n", edadMaximaIngresada);
    printf("La edad minima ingresada es: %d\n", edadMinimaIngresada);
    printf("El promedio de edades es: %.2f\n", promedioEdad);
    printf("La cantidad de edades ingresadas es: %d\n", contadorEdades);
    printf("La persona casada más joven es: %c\n", casadaMasJoven);
    printf("La persona soltera más vieja es: %c\n", solteraMasVieja);

    if(contadorCasadas > contadorSolteras && contadorCasadas > contadorDivorciadas)
    {
        printf("El estado civil más ingresado es casada \n");
    }
    else if(contadorDivorciadas > contadorSolteras)
    {
        printf("El estado civil más ingresado es divorciada \n");
    }
    else
    {
        printf("El estado civil más ingresado es soltera \n");
    }
    return 0;
}
