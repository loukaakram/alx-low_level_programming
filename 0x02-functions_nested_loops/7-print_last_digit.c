#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: takes the value of the last digit
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
	c = -c;
	_putchar(c + '0');
	return (c);
}
