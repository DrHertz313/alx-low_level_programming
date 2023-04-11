#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int a;

	/* Find the most significant bit */
	for (a = 0; a < 63; a++)
	{
		mask <<= 1;
		if (n < mask)
			break;
	}

	/* Print the binary representation */
	for (; a >= 0; a--)
	{
		if ((n >> a) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
