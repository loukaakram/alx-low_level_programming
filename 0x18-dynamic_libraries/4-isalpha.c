#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character.
 *@c:checks iput of function
 *Return:1 if c is a letter,lowercase or uppercase otherwise always 0 (success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
