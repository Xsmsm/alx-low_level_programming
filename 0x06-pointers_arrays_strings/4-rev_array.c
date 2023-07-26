#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int k[n];

	j = 0;
	n--;

	while (n >= 0)
	{
		k[j] = a[n];
		n--;
		j++;
	}

	j = 0
	while (k[j] != '\0')
	{
		a[n] = k[j];
		n++;
		j++;
	}
}

