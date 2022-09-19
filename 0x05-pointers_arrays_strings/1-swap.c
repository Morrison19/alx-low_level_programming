#include "main.h"

/**
 * swap_int - swaps two intger
 * @a: int pointer type
 * @b: int pointer type
 *Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
