#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *newm;
	int i = 0;
	int n = 0;
	int r = 0;
	int d = 0;

	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}

	while (s1[i] != '\0')
		i++;

	while (s2[n] != '\0')
		n++;

	newm = malloc(sizeof(char) * (i + n + 1));

	while (s1[r] != '\0')
	{
		newm[r] = s1[r];
		r++;
	}
	while (s2[d] != '\0')
	{
		newm[r] = s2[d];
		d++;
	}
	newm[r] = '\0';
	return (newm);
}
