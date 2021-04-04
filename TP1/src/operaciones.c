#include "operaciones.h"

float Sumar(float operador1, float operador2)
{
	float resultado;

	resultado = operador1 + operador2;

	return resultado;
}

float Restar(float operador1, float operador2)
{
	float resultado;

	resultado = operador1 - operador2;

	return resultado;
}

float Multiplicar(float operador1, float operador2)
{
	float resultado;

	resultado = operador1 * operador2;

	return resultado;
}

float Dividir (float operador1, float operador2)
{
	float resultado;

	resultado = operador1 / operador2;

	return resultado;
}

int factorial (float numero)
{
    int resultado;
    int i;

   resultado = 1;

    for (i = numero; i>1 ; i--)
    {
        resultado = resultado * i;
    }

    return resultado;
}
