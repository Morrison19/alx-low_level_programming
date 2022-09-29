#include "main.h"

/**
 * _print_rev_recursion - a function that prints a strng in reverse
 * @s: the string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

