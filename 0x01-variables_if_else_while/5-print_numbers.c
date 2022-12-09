#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry in to main
*printf all single digit of base 10
*Return: 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
