#include "main.h"
#include <math.h>

/**
 * _pow_recursion - a function tha returns the value of x when raised
 * @x: number that is raised
 * @y: number used to raise to power
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

