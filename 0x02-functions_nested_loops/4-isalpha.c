#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: letters of the alphabet
 * Return: 1 if int c is a letter,
 * lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

