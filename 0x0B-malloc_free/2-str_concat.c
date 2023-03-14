#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: String one
 * @s2: String two
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int a1, a2, i, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	a1 = 0, a2 = 0;
	while (*(s1 + a1))
		a1++;
	while (*(s2 + a2))
		a2++;

	s = malloc(sizeof(char) * (a1 + a2 + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < a1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = a1; i <= a2; j++, i++)
		*(s + j) = *(s2 + i);

	return (s);
}
