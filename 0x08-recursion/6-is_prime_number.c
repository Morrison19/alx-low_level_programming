#include "main.h"

int _is_prime_number(int n, int i);

/**
 * is_prime_number - a functions that return 1 is inter is prime number
 * otherwise 0
 * @n: interger inputted
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_is_prime_number(n, n - 1));
}

/**
 * _is_prime_number - calculate if a number is prime recursively
 * @i: iterator
 * @n: number to evaluate
 * Return: 1 if n is prime, otherwise 0
 */

int _is_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (_is_prime_number(n, i - 1));
}
