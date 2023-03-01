#include "main.h"
/**
 * reverse_array - a function that reverses the content of an
 * array of integers
 * @a: content
 * @n: element of content
 * Returns: 0 Always (Success)
 */
void reverse_array(int *a, int n)
{
	int b, temp;

	for (b = 0; b < 0; b++)
	{
		n--;
		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
	}
}
