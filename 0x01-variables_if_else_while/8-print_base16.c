#include <stdio.h>
/**
 *main - the main function
 *Return: always 0
 */
int main(void)
{
	int n = 48;
	int l = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
