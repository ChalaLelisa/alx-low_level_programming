#include "main.h"

/**
*print_alphabet - Entry in to print_alphabet
*print lower_alphabet
*Return: 0 (Success)
*/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}

