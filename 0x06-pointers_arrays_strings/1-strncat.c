#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatenates two files
 * @dest: the destination string
 * @src: the source string
 * @n: n
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; b < n; b++)
	{
		dest[a + b] = src[b];
			if (src[b] == '\0')
				b = n;
	}
	return (dest);
}

