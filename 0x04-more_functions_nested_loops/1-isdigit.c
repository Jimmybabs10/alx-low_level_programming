#include "main.h"

/**
 *_isdigit - checks for a digit
 *@c: argument to be checked for
 *Return: 0 if failed 1 if success
 */

int _isdigit(int c)
{
	c = 0;

	if (c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
