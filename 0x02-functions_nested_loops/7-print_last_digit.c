#include "main.h"

/**
 * print_last_digit - printing the las digit
 * @n: the given number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}
