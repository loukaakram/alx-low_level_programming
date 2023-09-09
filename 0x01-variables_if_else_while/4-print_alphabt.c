#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 26 ; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
