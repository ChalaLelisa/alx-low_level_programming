#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry in to main
*print lower case alphabate except q and e
*Return: 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
