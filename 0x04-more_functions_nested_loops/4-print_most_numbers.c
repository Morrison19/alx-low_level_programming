#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: prints the numbers, from 0 to 9
 * do not print 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '2' || number == '4')
			;
		else
		{
			_putchar(number);
		}
		_putchar('\n');
	}
}
