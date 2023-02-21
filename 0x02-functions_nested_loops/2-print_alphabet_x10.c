#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabets
 * in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
		while (i < 10)
	{
		_putchar(ch);
	}

	_putchar('\n');
	i++;
}
