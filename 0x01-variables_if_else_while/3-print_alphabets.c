#include <stdio.h>

/**
 *  main - Prints the alphabets in lowercase then uppercase
 *  followed by a new line
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch = 'b'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch = 'B'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
		return (0);
}
