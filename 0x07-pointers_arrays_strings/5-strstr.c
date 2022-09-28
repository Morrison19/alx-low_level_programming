#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: pointer where we search for character
 * @needle: character we search for
 * Return: a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
