#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
