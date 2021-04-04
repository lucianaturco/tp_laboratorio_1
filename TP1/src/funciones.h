#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/**
 * @fn void MenuOptions(float, float)
 * @brief Muestra en pantalla el menu de opciones para que elija el usuario
 *
 * @param primerOperando
 * @param segundoOperando
 */
void MenuOptions(float primerOperando, float segundoOperando);

/**
 * @fn int GetIntRange(char[], char[], int, int)
 * @brief Pedir el ingreso de un numero entero y validar en el rango deseado
 *
 * @param mensaje: Informar al usuario que ingrese un valor
 * @param mensajeError: Informamos al usuario que el numero ingresado no es valido
 * @param maximo: El mayor numero que puede ingresar el usuario
 * @param minimo: El menor numero que puede ingresar el usuario
 * @return Retorna el numero entero ingresado por el usuario, despues de validarlo
 */
int GetIntRange(char mensaje[], char mensajeError[], int maximo, int minimo);

/**
 * @fn float GetFloat(char[])
 * @brief Pedir el ingreso de un numero flotante
 *
 * @param mensaje: Informar al usuario que ingrese un valor
 * @return Retorna el numero ingresado por el usuario
 */
float GetFloat(char mensaje[]);

/**
 * @fn int FactorialRange(float)
 * @brief notifica si el numero ingresado se encuentra en el rango disponible para calcular el factorial
 *
 * @param operando1
 * @return 1 si puede calcularse el factorial, 0 si no puede calcularse el factorial
 */
int FactorialRange(float operando1);

/**
 * @fn void MostrarResultados(float, float, float)
 * @brief Muestra resultados de funciones llamadas con anterioridad
 *
 * @param resultado1
 * @param resultado2
 * @param resultado3
 */
void MostrarResultados(float resultado1, float resultado2, float resultado3);

/**
 * @fn void DivisionPorCero(float, float)
 * @brief Informa al usuario el resultado y/o el mensaje de error
 *
 * @param operando divisior
 * @param resultadoDivision
 */
void DivisionPorCero(float operando, float resultadoDivision);

/**
 * @fn void MostrarFactorial(int, int, long int, long int)
 * @brief Informa al usuario los resultados del calculo de factoriales
 *
 * @param flag1: puede calcularse el factorial del operando 1
 * @param flag2: puede calcularse el factorial del operando 2
 * @param factorialA : resultado del factorial del operando 1
 * @param factorialB : resultado del factorial del operando 2
 */
void MostrarFactorial(int flag1, int flag2, long int factorialA, long int factorialB);

#endif /* FUNCIONES_H_ */
