#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: string to be searched
 * @c: character to be found
 *
 * Return: return string s or NULL
 */

char *_strchr(char *s, char c)
{
	char *a = s - 1;

	do {
		a++;
		if (*a == c)
			return (a);
	} while (*a != '\0')
	return (0);
}
