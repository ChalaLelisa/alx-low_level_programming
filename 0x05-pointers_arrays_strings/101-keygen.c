#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - A program that generate a randon password
 * randomPasswordGeneration - random password generation
 * 
 * @N: number of char
 * Return: Always 0.
 */
void randomPasswordGeneration(int N)
{
	int i = 0;
	int random_num = 0;

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
		else if (random_num == 2)
		{
			password[i] = symbols[rand() % 8];
			random_num = rand() % 4;
			printf("%c", password[i]);
		}
		else if (random_num == 3)
		{
			password[i] = LETTER[rand() % 26];
			random_num = rand() % 4;
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
