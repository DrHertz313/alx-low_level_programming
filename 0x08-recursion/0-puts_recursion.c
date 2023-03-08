#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: a string
 * Return: On success 1.
 * on error, -1 is returned
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
