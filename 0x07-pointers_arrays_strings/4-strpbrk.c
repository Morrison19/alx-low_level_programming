#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: a pointer where we search for a character
 * @accept: character we searched for
 * Return: a pointer or NULL if character not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	do {
		s++;
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == *(accept + i))
				return (str);
	} while (*s != '\0')
	return (0);
}
