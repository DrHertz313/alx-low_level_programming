#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count in main
 * @av: arguments passed to main
 *
 * Return: Pointer
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int l, u, i, j, k;

	if (ac == 0 || av == NULL)
		return (0);
	l = 0, k = 0;
	for (i = 0; i < ac; i++)
	{
		u = 0;
		while (av[i][u])
			u++;
		l += u + 1;
	}
	s = malloc((l + 1) * sizeof(char));

	if (s == 0)
		return (0);

	for (j = 0; j < ac; j++)
	{
		u = 0;
		while (av[j][u])
		{
			*(s + k) = av[j][u];
			k++;
			u++;
		}
		*(s + k) = '\n';
		k++;
	}
	*(s + k) = '\0';

	return (s);
}
