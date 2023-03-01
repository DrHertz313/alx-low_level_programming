#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: a copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; dest[a] != '\0'; a++)
		if (a < n)
			dest[a] = src[a];
	while (a < n)
		dest[a++] = '\0';

	return (dest);
}
