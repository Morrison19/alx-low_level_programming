#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: contain strings of character
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

