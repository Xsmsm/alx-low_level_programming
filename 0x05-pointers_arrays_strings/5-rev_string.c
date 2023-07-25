#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
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
}

