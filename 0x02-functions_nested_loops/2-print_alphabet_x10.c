#include "main.h"

/**
 * print_alphabet_x10 -printing the alphabet 10 times
 *
 * Return : void
 */

void print_alphabet_x10(void)
{
	char ch;
	int n = 1;

	while (n <= 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}
