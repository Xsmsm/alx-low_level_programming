#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		*s++;
	}

	*s--;

	int long = c;

	while ( long != 0 )
	{
		_putchar(*s);
		*s--;
		long--;
	}
	_putchar('\n');
