#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: a pointer where we search for a character
 * @accept: character we searched for
 * Return: a pointer or NULL if character not found
 */

char *_strpbrk(char *s, char *accept)
{
	char *str = s;
	int i;

	do {
		str++;
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*str == *(accept + i))
				return (str);
	} while (*str != '\0')
	return (0);
}
