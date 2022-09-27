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

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
	{
		return (NULL);
	}
}

