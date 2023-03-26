#include <stdio.h>
#include <stdlib.h>

int main()
{
	float importeUno;
	float importeDos;
	float sumaImportes;
	float promedioImportes;
	float precioConIva;

	printf("Ingrese el primer importe: ");
	scanf("%f",&importeUno);
	printf("Ingrese el segundo importe: ");
	scanf("%f", &importeDos);

	sumaImportes = importeUno + importeDos;
	promedioImportes = sumaImportes/2;
	precioConIva = sumaImportes*1.21;

	printf("La suma total es %.2f\n", sumaImportes);
	printf("El promedio es %.2f\n", promedioImportes);
	printf("El precio final más IVA es %.2f\n", precioConIva);

	return EXIT_SUCCESS;
}

