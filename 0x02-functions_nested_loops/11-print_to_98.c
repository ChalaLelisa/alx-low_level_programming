#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - to print numbers from input up to 98
 * @i, the number to be counted
 */
void print_to_98(int n)
{
	
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
		printf("%d\n", n++);

		printf("%d\n", n);
	}
}
