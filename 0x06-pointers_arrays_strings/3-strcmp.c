#include "main.h"
#include <string.h>
/**
 * _strcmp - a function that compares two strings
 * @s1: string to be compared with
 * @s2: string to compare
 * Return: 0 Always (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
