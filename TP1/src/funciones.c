#include "funciones.h"
#include "operaciones.h"
#include <stdio.h>

void MenuOptions(float primerOperando, float segundoOperando)
{	printf("\n**********MENU PRINCIPAL**********\n");
	printf("1. Ingresar primer operando (A=%.2f)\n", primerOperando);
	printf("2. Ingresar segundo operando (B=%.2f)\n", segundoOperando);
	printf("3. Calcular todas las operaciones\n");
	printf("4. Informar resultados\n");
	printf("5. Salir\n\n");
}

int GetIntRange(char mensaje[], char mensajeError[], int maximo, int minimo)
{
	int numeroIngresado;
		printf("%s", mensaje);
		scanf("%d", &numeroIngresado);


	while(numeroIngresado < minimo	|| numeroIngresado > maximo)
	{
		printf("%s", mensajeError);
		scanf("%d", &numeroIngresado);
	}

	return numeroIngresado;
}

float GetFloat(char mensaje[])
{
	float numeroIngresado;

	printf("%s", mensaje);
	scanf("%f", &numeroIngresado);

	return numeroIngresado;
}

int FactorialRange(float operando1)
{
	int rtn;

	if(operando1>=0 && operando1<13)
	{
		rtn = 1;
	}
	else
	{
		rtn = 0;
	}

	return rtn;
}

void MostrarResultados(float resultado1, float resultado2, float resultado3)
{
	printf("El resultado de A+B es: %.2f\n", resultado1);
	printf("El resultado de A-B es: %.2f\n", resultado2);
	printf("El resultado de A*B es: %.2f\n", resultado3);
}

void DivisionPorCero(float operando, float resultadoDivision)
{
	if (operando!= 0)
	{
	printf("El resultado de A/B es: %.2f\n", resultadoDivision);
	}
	else
	{
	printf("No es posible dividir por cero\n");
	}
}

void MostrarFactorial(int flag1, int flag2, long int factorialA, long int factorialB)
{
	if(flag1 && flag2)
	{
		printf("El factorial de A es: %ld y el factorial de B es: %ld\n", factorialA, factorialB);
	}
	else
	{
		printf("No se pudo calcular el factorial con los numeros ingresados\n");
	}
}






