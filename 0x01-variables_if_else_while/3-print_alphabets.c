#include <stdio.h>

/**
 * main - Entry point
 * Print alphabets in both low and upper case
 * Return: 0
 */

int main(void)
{

	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}

	b = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}

	putchar('\n');

	return (0);
}
