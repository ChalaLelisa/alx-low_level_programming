#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - A program that generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int randoom_num = 0;

	srand((unsigned int)(time(NULL)));
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char password[N];

	random_num = rand() % 4;
	for (i = 0; i < N; i++)
	{
		if (random_num == 1)
		{
			password[i] = numbers[rand() % 10];
			random_num = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			random_num = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random_num == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			random_num = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
int main(void)
{
	int N = 10;

	randomPassword(N);

	return (0);
}
