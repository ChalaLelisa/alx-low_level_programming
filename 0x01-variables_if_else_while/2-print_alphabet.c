#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry in to main
*printf alphabetes in lowercase
*Return: 0 (Success)
*/
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
