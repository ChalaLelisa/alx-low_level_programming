#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input character
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; b < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
