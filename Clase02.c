/*
 ============================================================================
 Name        : Clase02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_INT 64537

int sumaEnteros(int primerValorSumar, int segundoValorAsumar, int *resultado);

int main(void) {
	int primerValor;
	int segundoValor;
	int resultado=0;
	printf("Valor 1?\n");
	scanf("%d", &primerValor);
	printf("Valor 2?\n");
	scanf("%d", &segundoValor);
	if (sumaEnteros(primerValor, segundoValor, &resultado)==0)
	{
		printf ("El resultado es %d\n", resultado);

	}

	else
	{
		printf("Error");
	}
}

int sumaEnteros(int primerValorSumar, int segundoValorAsumar, int *resultado)
{
	int retorno = -1;
	long resultadoLong;
	resultadoLong = primerValorSumar + segundoValorAsumar;
	if(resultadoLong	 <= MAX_INT)
	{
		retorno = 0;
		*resultado = (int)resultadoLong;
	}
	return retorno;

}
