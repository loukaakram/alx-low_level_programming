#include <stdio.h>

/**
 * _islower - checks for lowercase character.
 *@c: checks inpit of function
 * Return: 1 if 'c' is lowecase otherwise always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
