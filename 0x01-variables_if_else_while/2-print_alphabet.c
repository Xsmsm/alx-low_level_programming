#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	int n;

	n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
