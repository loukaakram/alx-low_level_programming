#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the integer to check
 * Return: 1 if c is a digit, otherwise always 0 (success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
