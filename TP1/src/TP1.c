/*
 ============================================================================
 Name        : TP1.c
 Author      : Luciana Turco
 Version     : 1.0

 Description : Calculadora
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "operaciones.h"

int main(void) {

	int opcion;
	float primerOperando;
	float segundoOperando;
	short int flagOperando1;
	short int flagOperando2;
	float resultadoSuma;
	float resultadoResta;
	float resultadoProducto;
	float resultadoDivision;
	long int factorialA;
	long int factorialB;
	short int flagOperaciones;
	short int flagFactorialA;
	short int flagFactorialB;

	primerOperando = 0;
	segundoOperando = 0;
	flagOperando1 = 1;
	flagOperando2 = 1;
	flagOperaciones = 1;
	flagFactorialA = 0;
	flagFactorialB = 0;

	setbuf(stdout, NULL);

	printf("¡Bienvenido a la calculadora!\n");

	do{
		MenuOptions(primerOperando, segundoOperando);

		opcion = GetIntRange("Ingrese una opcion: ", "Error. Ingrese una opción válida: ", 5, 1);

		switch(opcion)
		{
			case 1:
				primerOperando = GetFloat("Ingrese el primer operando: ");
				flagOperando1 = 0;
				break;
			case 2:
				segundoOperando = GetFloat("Ingrese el segundo operando: ");
				flagOperando2 = 0;
				break;
			case 3:
				if (flagOperando1 || flagOperando2)
				{
					printf("Para calcular las operaciones ingrese ambos operandos (A y B)\n");
				}
				else
				{
					resultadoSuma = Sumar(primerOperando, segundoOperando);
					resultadoResta = Restar(primerOperando, segundoOperando);
					resultadoProducto = Multiplicar(primerOperando, segundoOperando);

					if(segundoOperando == 0)
					{
						printf("Para calcular la división B debe ser distinto de cero.\n");
					}
					else
					{
						resultadoDivision = Dividir(primerOperando, segundoOperando);
					}

					if(FactorialRange(primerOperando))
					{
						factorialA = factorial(primerOperando);
						flagFactorialA = 1;
					}
					else
					{
						printf("Para calcular el factorial de A debe ingresar un numero entero positivo menor a 13\n");
					}

					if(FactorialRange(segundoOperando))
					{
						factorialB = factorial(segundoOperando);
						flagFactorialB = 1;
					}
					else
					{
					printf("Para calcular el factorial de B debe ingresar un numero entero positivo menor a 13\n");
					}
					flagOperaciones = 0;
				}
				break;
			case 4:
				if(flagOperaciones)
				{
					printf("Para informar los resultados, debe calcular las operaciones (opcion 3)\n");
				}
				else
				{
					MostrarResultados(resultadoSuma, resultadoResta, resultadoProducto);

					DivisionPorCero(segundoOperando, resultadoDivision);

					MostrarFactorial(flagFactorialA, flagFactorialB, factorialA, factorialB);
				}
				break;
			case 5:
				printf("¡Gracias por ultilizar la calculadora!\n\n");
				break;
		}
		system("pause");

	}while(opcion != 5);

	return EXIT_SUCCESS;
}
