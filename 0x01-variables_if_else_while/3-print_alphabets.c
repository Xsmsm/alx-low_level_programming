#include <stdio.h>
/**
 *main- main start
 *Return: always 0
 */
int main(void)
{
	int n = 97;
	int u = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
