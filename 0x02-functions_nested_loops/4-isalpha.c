#include "main.h"

/**
 * _isalpha - checks if c is alphabet
 * @ c: the checked character
 * Return: 1 if it's a charachter and 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	Return (0);
}
