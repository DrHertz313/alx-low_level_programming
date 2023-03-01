#include "main.h"
#include <string.h>

/**
 * _strcat - This function appends the src string to the dest string,
 *  overwriting the terminating null byte (\0) at the end of dest, and then
 *  adds a terminating null byte
 * @dest: Destination string
 * @src: Source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; (dest[a + b] = *src++) != '\0'; b++)
	{
	}
	return (dest);
}
