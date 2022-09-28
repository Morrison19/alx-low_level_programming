#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string
 * @s: pointer to the string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (strlen(s) < 1)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
