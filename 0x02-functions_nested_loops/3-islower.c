#include <ctype.h>
#include "main.h"

/**
 *_islower - checks for lowercase
 *
 *@c: parameter to pass for lower case
 *
 *Return: 1 if it's lower and 0 if it's not lowr
 *
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
