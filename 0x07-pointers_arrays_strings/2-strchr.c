#include "main.h"
#include <stdio.h>

/**
 * *_strchr - a function that locates a character in a string
 * @s: string to search
 * @c: character in the sring to be found
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	while (i == c && i != 0)
	{
		i = *s++;
	}
	return (s);
	if (i == 0)
	{
		return (NULL);
	}
}

