#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = i + 1; j <= 10; j++)
		{
			putchar(i + '0');
			putchar(' ');
			putchar(j + '0');
			putchar(',');
		}
	}
	return (0);
}
