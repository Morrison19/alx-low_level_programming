#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: the string to print
 * Return: O
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*S);
	_puts_recursion(s + 1);
}
