#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: string to search
 * @c: character in the sring to be found
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
