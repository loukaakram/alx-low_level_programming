#include "main.h"

/**
 * more_numbers - 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int a, b, c;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			a = c;
				if (c > 9)
				{
					_putchar(1 + '0');
					a = c % 10;
				}
			_putchar(a + '0');
		}
		_putchar('\n');
	}
}
