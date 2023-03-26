#include <stdio.h>

int main()
{
    char inicialNombre;
    int edad;
    char sexo;
    int i;
    int acumuladorEdad;
    float promedio;
    int mayorEdad;
    int menorEdad;
    char inicialMayorEdad;
    char inicialMenorEdad;
    float promedioMujeres;
    int sumaEdadMujeres;
    int contadorMujeres;
    int mayorEdadMujer;
    int menorEdadHombre;
    char mujerMasGrande;
    char hombreMasJoven;

    acumuladorEdad = 0;
    sumaEdadMujeres = 0;
    contadorMujeres = 0;

    for(i=0; i<4; i++)
    {
        printf("Ingrese la inicial de su nombre ");
        fflush(stdin);
        scanf("%c", &inicialNombre);

        printf("Ingrese su edad ");
        scanf("%d", &edad);

        printf("Ingrese sexo ");
        fflush(stdin);
        scanf("%c", &sexo);

        acumuladorEdad = acumuladorEdad + edad;

      if(i == 0 || edad > mayorEdad)
      {
          mayorEdad = edad;
          inicialMayorEdad = inicialNombre;
      }

      if(i == 0 || edad < menorEdad)
      {
          menorEdad = edad;
          inicialMenorEdad = inicialNombre;
      }

      if(i == 0 && sexo == 'f' || edad > mayorEdad && sexo == 'f')
      {
           mayorEdadMujer = edad;
           mujerMasGrande = inicialNombre;
      }
      if(i == 0 && sexo == 'm' || edad < menorEdad && sexo == 'm')
      {
            menorEdadHombre = edad;
            hombreMasJoven = inicialNombre;
      }

      if(sexo == 'f')
      {
          contadorMujeres++;
          sumaEdadMujeres += edad;
      }

    }

    promedio = (float)acumuladorEdad/i;

    if(sexo == 'f')
    {
    promedioMujeres= (float)sumaEdadMujeres/contadorMujeres;
    }


    printf("La suma de las edades es %d\n", acumuladorEdad);
    printf("El promedio de edades es %.2f\n", promedio);
    printf("La inicial de la mayor edad es %c\n", inicialMayorEdad);
    printf("La inicial de la menor edad es %c\n", inicialMenorEdad);
    printf("El promedio de edad de mujeres es: %.2f\n", promedioMujeres);
    printf("La mujer mas grande es %c\n", mujerMasGrande);
    printf("El hombre mas joven es %c\n", hombreMasJoven);
    return 0;
}

