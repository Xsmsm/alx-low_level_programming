#include <stdio.h>
/**
 * main - this is the main function
 * Return: always 0
 */

int main(void)
{
	int n1 = 48;
	int n2 = 49;
	int c = 1;
	int n = 1;

	while (c <= 45)
	{
		if (n1 == n2)
		{
			n2++;
			continue;
		}

		putchar(n1);
		putchar(n2);

		if (n1 == 56 && n2 == 57)
			break;

		putchar(',');
		putchar(' ');
		n2++;
		c++;

		if (n2 == 58)
		{
			n1++;
			n++;
			n2 = 48 + n;
		}
	}
	putchar('\n');
	return (0);
}
