#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int countd = 0;
	int counts = 0;

	while (dest != '\0')
	{
		dest++;
		countd++;
	}

	while (src != '\0')
	{
		dest[countd] = src[counts];
		counts++;
		countd++;
	}

	dest[countd] = '\0';

	return (dest);
}
