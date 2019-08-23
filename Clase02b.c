/*
 ============================================================================
 Name        : Clase02b.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Pedir maximo, minimo, promedio y cantidad de numeros ingresados por el usuario */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int auxiliar;
	int maximo;
	int minimo;
	float promedio;
	int contador;
	int respuesta;

	do
	{
		contador++;
		printf("Ingrese un numero");
		scanf("%d", &auxiliar);

		if(auxiliar > maximo)
		{
			auxiliar = maximo;
		}
		if(auxiliar < minimo)
		{
			auxiliar = minimo;
		}

		printf("Si desea ingresar otro numero, ingrese S");
		scanf("%d",&respuesta);


	} while(respuesta=='s');

	promedio = (auxiliar/contador);

	printf("El maximo es %d \n", maximo);
	printf("El minimo es %d \n", minimo);
	printf("La cantidad de numeros que introdujo es %d \n", &contador);
	printf("El promedio es %f \n", promedio);

