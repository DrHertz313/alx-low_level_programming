#include "main.h"
#include <stdio>

/** _isupper - checks for uppercase character
 * Returns 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	for (c = A; c <= Z; c++)
	{
		_putchar(c);
			return (1);
	}
	else
		return (0);
	_putchar('\n');
}
