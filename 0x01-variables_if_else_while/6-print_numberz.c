#include <stdio.h>

/**
 * main -Entry point
 * Description: Print all single digit numbers of base 10 using putchar
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');

	return (0);
}
