#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int n = 0;
	int j;

	while (n <= 10)
	{
		for (j = 0, j <= 14, j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		n++;
	}
	_putchar('\n');
}
