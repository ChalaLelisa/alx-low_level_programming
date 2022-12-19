#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: char to be checked
 *
 * Return: 0 is success
 */
void puts2(char *str)
{
	int c_string;

	for (c_string = 0; str[c_string] != '\0'; c_string++)
	if (c_string % 2 == 0)
		_putchar(str[c_string]);
	_putchar('\n');
}
