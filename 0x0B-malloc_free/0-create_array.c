#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of the array
 * @c: input character
 * Return: An Array initialized with the specific char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	if (size <= 0)
		return (0);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);

	for (a = 0; a < size; a++)
		*(s + 1) = c;

	*(s + 1) = '\0';

	return (s);
}
