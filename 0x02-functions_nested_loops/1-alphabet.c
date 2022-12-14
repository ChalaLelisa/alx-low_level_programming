#include "main.h"

/**
*print_alphabet - Entry in to print_alphabet
*print lower_alphabet
*Return: 0 (Success)
*/
void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);

	_putchar('\n');
}

