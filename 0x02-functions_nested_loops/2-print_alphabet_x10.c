#include "main.h"

/**
 * print_alphabet -printing the alphabet 10 times
 *
 * Return : void
 */

void print_alphabet(void);
{
	char ch = 'a';
	int n = 1;

	while (n <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
