#include "main.h"

/**
 * print_sign - it prints the sign of a number
 * @n: it is checked for it's sign
 *
 * Return: 1 for number greater than 0,
 *	0 for zero number
 *	-1 for number less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		-Putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
