#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the integer to check
 * Return: 1 if c is uppercase, otherwise always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
