#include <stdio.h>
/**
 * main -this is the main function
 * Return: always 0
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		n++;
		putchar(44);
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
