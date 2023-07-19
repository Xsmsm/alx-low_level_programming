#include "main.h"

/**
 *_islower - Write a function that checks for lowercase character
 *@c: the charachter to be checked
 * Return: 1 for lower case and 0 for other things
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
