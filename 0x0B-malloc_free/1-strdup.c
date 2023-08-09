#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *newm;
	int i = 0;
	int n = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	newm = malloc(sizeof(char) * (i + 1));

	if (newm == NULL)
		return (NULL);

	while (str[n])
	{
		newm[n] = str[n];
		n++;
	}
	return (newm);
}

