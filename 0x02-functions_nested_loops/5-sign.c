#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number input
 * Return: 1 and prints + if int n is greater than zero
 * 0 and prints 0 if int n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
		if (n > 0)
			_putchar ('+');
			return (1);
		else if (n == 0)
			_putchar (0);
			return (0);
		else if (n < 0)
			_putchar ('-');
			return (-1);
		_putchar('\n')
}
