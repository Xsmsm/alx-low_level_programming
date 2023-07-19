#include "main.h"

/**
 * print_alphabet -printing the alphabets in lawercase
 *
 * * Return: always 0
 */

void print_alphabet(void)
{
	char ch;

	while (ch <= "z")
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}

