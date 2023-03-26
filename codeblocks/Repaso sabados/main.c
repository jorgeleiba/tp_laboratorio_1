/*
 ============================================================================
 Name        : Ejercicio1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
*/

# include <stdio.h>

int main()

{
	int calificacion;
	int cuentaA = 0;
	int cuentaB = 0;
	int cuentaC = 0;


	printf("Introduzca la letra que pertenece a la calificación \n");
	printf("Introduzca el caracter EOF para finalizar la carga de datos \n");

	while((calificacion = getchar())!= EOF)
		{
		switch(calificacion)
		{
		case 'A':
			cuentaA++;
			break;
		case 'B':
			cuentaB++;
			break;
		case 'C':
			cuentaC++;
			break;
		default:
			printf("Error Introduzca A, B o C \n");
			printf("Introduzca una nueva calificacion: \n");
			break;
		}

	}

		printf("\nLos totales son: \n");
		printf("A: %d", cuentaA);
		printf("B: %d", cuentaB);
		printf("C: %d", cuentaC);

}
