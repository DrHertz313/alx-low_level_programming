#include "main.h"

/**
 * print_numbers - function that peints numbers, from 0 to 9
 * followed by a new line
 * Return: 0-9
 */
void print_numbers(void);
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i);

	_putchar('\n');
}
