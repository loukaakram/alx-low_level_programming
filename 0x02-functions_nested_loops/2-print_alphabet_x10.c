#include <stdio.h>

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 */
void print_alphabet_x10(void)
{
	int a = 0, i;

	while (a < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
		a++;
	}
}
