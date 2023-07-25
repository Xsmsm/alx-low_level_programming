#include "main.h"

/**
 * rev_string - Reverses a string in-place
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
	int N = 0;

	while (*s != '\0')
	{
		N++;
		s++;
	}

	s--;

	while (N != 0)
	{
		_putchar(*s);
		N--;
		s--;
	}
	_putchar('\n');
}

