#include "main.h"

/**
 * char *_memset - entry point
 * @s: memory space to be filled
 * @n: number od spaces to fill
 * @b: byte to fill with
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
