#include <stdio.h>

/**
 * main - Prints the sum of all the multiples of 3 or 5
 * below 1024, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; 1 < 1024; i++)
		if (1 % 3 == 0 || 1 % 5 == 0)
			j += i;
	printf("%d\n", j);
	return (0);
}

