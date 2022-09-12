#include <stdio.h>

/**
 * main - Entry point
 * Description - Prints all alphabets except 'q' and 'e' using putchar
 * Return: 0
 */

int main(void)
{
	int b = 'a';

	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
			putchar (b);
		b++;
	}
	putchar('\n');

	return (0);
}

