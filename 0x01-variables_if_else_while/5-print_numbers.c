#include <stdio.h>
/**
 *main - the main function
 *Return: always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n % 2 != 0)
		{
			printf("%d", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
