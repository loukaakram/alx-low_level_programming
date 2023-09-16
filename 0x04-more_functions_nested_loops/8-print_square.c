#include "main.h"

/**
 * print_square - function that prints a square
 * @size: is the size of the square
 */
void print_square(int size)
{
	int a, b;
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
