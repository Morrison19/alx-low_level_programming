#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string we are checking for
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0, i, j;

	for (i = 0; s[i] != '\0' && i == c; i++)
		for (j = 0; accept[i] != '\0'; j++)
			if (s[i] == accept[i])
				c++;
	return (c);
}
