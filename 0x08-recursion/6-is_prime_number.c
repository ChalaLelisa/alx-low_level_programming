include "main.h"

/**
 * evaluate - evaluate whether number is prime
 * @x:integer
 * @y:integer
 * Return:int
 */
int evaluate(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (evaluate(x + 1, y));
}

/**
 * is_prime_number -  function that returns 1 if the
 * input integer is a prime number
 * @n:integer
 * Return:integer
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (evaluate(2, n));
}
