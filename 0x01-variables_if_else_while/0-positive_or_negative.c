#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is the main function
 * description: checking the number
 * return: always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		prontf("%d is positive\n", n);
	else if (n == 0)
	       prontf("%d is zero\n", n);
	else
	       	prontf("%d is negative\n", n);
	return (0);
}
