#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int n = 0;

	str = malloc(sizeof(char) * size);

	if (size == 0 || size == NULL)
		return (NULL);

	while (n < size)
	{
		str[n] = c;
		n++;
	}
	return (str);
}
