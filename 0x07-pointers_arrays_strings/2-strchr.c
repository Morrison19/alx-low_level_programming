#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: string to search
 * @c: character in the sring to be found
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	char *a = s - 1;

	while (*a != '\0')
	{
		if (*a == c)
			return (a);
		a++;
	}
	return (0);
}
