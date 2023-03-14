#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: String
 * Return: Pointer
 */
char *_strdup(char *str)
{
	int a, i;
	char *s;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (*(str + a))
		a++;

	s = malloc(sizeof(char) * a + i);

	if (s == 0)
		return (0);
	for (i = 0; i <= i; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
