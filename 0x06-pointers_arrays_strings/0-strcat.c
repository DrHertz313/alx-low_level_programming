#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: char
 */
char *_strcat(char *dest, char *src);
{
	char a[] = "dest";
	char b[] = "src";

	strcat(a, b);
	_putchar("%s\n", a);
		return (0);
}
