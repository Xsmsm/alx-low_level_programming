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
		s++;
	}

	s--;

	while ( c != 0 )
	{
		_putchar(*s);
		s--;
		c--;
	}
	_putchar('\n');
}
