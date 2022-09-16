#include  "main.h"

/**
 * _isdigit - function that checks for a digit 0 to 9
 * @c: variable
 * Return: 1 id c is a digit
 * else -1 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
