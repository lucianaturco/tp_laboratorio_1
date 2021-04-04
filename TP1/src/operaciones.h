#ifndef OPERACIONES_H_
#define OPERACIONES_H_

/**
 * @fn float Sumar(float, float)
 * @brief Suma dos operandos flotantes
 *
 * @param primer operando
 * @param segundo operando
 * @return resultado de la suma
 */
float Sumar(float operador1, float operador2);

/**
 * @fn float Restar(float, float)
 * @brief Resta dos operandos flotantes
 *
 * @param primer operando
 * @param segundo operando
 * @return resultado de la resta
 */
float Restar(float operador1, float operador2);

/**
 * @fn float Multiplicar(float, float)
 * @brief Multiplica dos operandos flotantes
 *
 * @param primer operando
 * @param segundo operando
 * @return resultado de la multiplicacion
 */
float Multiplicar(float operador1, float operador2);

/**
 * @fn float Dividir(float, float)
 * @brief Divide dos numeros flotantes
 *
 * @param primer operando
 * @param segundo operando
 * @return resultado de la division
 */
float Dividir (float operador1, float operador2);

/**
 * @fn long factorial(float)
 * @brief Calcula el factorial tomando la parte entera de un numero
 *
 * @param numero: operando ingresado
 * @return factorial del operando ingresado
 */
int factorial (float numero);


#endif /* OPERACIONES_H_ */
