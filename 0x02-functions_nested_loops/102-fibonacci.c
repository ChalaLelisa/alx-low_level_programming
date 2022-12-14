#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always o
 */
int main(void)
{
	int n;
	unsignedblong fb1 = 0, fb2 = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = fb1 + fb2;
		printf("%lu", sum);

		fb1 = fb2;
		fb2 = sum;
		if (n == 49)
			printf("\n";
		else
			printf(",");
	}
	return (0);
}

