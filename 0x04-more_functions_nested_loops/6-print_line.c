#include "main.h"

/**
 * print_line - Entry point
 * Description: A function that draws a straight line in the terminal
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
