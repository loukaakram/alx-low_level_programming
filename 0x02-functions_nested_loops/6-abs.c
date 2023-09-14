#include "main.h"

/**
 * _abs - Functin that computes the absolute value of an integer
 * @n: takes in  integer type input for function
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
