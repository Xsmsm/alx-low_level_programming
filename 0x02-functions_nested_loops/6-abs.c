#include "main.h"
/**
 * _abs - the absolute value of a number
 *@c: the computed number to be checked
 *Return: the value or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absV;

		absV = c * -1;
		return (absV);
	}
	else
	{
		return (c);
	}
}
