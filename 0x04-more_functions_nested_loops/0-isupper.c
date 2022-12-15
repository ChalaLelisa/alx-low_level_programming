#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z; uppercase++)
	{
	if (c == uppercase)
	{
	isupper = 1;
	break;
	}
	}
	return (isupper);
}
