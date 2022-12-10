#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry in to main
*printf size of data type in byte(s)
*Return: 0 (Success)
*/
int main(void)
{
	char ch;
	int int_num;
	long int long_num;
	long long long_long_num;
	float float_num;

	printf("size of a char: %lu byte(s)\n", sizeof(ch));
	printf("size of an int: %lu byte(s)\n", sizeof(int_num));
	printf("size of a long int: %lu byte(s)\n", sizeof(long_num));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long_long_num));
	printf("size of a float: %lu byte(s)\n", sizeof(float_num));
return (0);
}
