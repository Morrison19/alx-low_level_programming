#include <stdio.h>

/**
 * main -Entry point
 * Description: Print all small alphabets.
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
	putchar('\n');

	return (0);

}

