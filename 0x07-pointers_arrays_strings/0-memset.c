#include "main.h"
#include <string.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s: Starting address of memory to be filled
 * @b: constant byte
 * @n: Number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
