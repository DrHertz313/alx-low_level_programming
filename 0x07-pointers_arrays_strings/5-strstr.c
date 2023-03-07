#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @needle: substring to locate
 * @haystack: string to search
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int c = 0;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != c)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}