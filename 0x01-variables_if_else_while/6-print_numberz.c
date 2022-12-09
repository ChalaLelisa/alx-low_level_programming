#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry in to main
*printf all single digit numbers of base 10 starting from 0
*Return: 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
