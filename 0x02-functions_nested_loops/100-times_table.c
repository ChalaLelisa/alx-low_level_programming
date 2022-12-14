#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: value of times table
 */
void print_times_table(int n)
{
	int i, mult, prod;

	for (i = 0; i <= 9; i++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * mult;
				if (prod <= 9)
					_putchar(' ');
				else
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
}

