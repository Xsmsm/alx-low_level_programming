#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	half  = count / 2;
	int c = 0;

	while (c < half)
	{
		_putchar(*str[c]);
		c++;
	}
	_putchar('\n');
}


