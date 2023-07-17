#include <stdio.h>
/**
 * main - this is the main function
 * Return: always 0
 */

int main(void)
{
	int n1 = 48;
	int n2 = 48;

	while (n1 && n2 <= 57)
	{
		if (n1 == n2)
		{
			n2++;
			continue;
		}

		putchar(n1);
		putchar(n2);
		putchar(',');
		putchar(' ');
		n2++;

		if (n2 == 9)
			n1++;
	}
		putchar('\n');
		return (0);
}
