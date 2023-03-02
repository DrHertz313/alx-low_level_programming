#include "main.h"
#include <string.h>
/**
 * cap_string - a function that capitalizes all words of a string
 *@n: input string
 *Return: Caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int a, x;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}',
			' ', '\n', '\t'};

	for (a = 0; n[a] != '\n'; a++)
	{
		if (n[a] >= 'a' && n[a] <= 'z')
		{
			n[a] = n[a] - cap;
		}

		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[a] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
		return (n);
}
