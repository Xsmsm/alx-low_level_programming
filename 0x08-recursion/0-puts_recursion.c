#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s : the given string
 * Return: none
 */

void _puts_recursion(char *s)
{
	int n =0;

	if (s[n] != 0)
	{
		_putchar(s[n]);
		n++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
