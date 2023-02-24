#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: input
 * Return: 1 if int c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	c = 0;

	if (c <= 9)
		return (1);
	else
		return (0);
}

