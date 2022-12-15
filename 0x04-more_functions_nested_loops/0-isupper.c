nclude "main.h"

/**
 * _isupper - uppercase letters check
 * @c: chracter to be checked
 *
 * Return: 1 for uppercase and 0 else
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

