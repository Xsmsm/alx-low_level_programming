#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main- this is the last digit code
 *description: a code for printing the last digit
 *Return: always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld ==  5)
		printf("last digit of %d is %d and is 0\n", n, ld);
	else
		printf("last digit of %d is %d and is less than 5\n", n, ld);
	return (0);
}
