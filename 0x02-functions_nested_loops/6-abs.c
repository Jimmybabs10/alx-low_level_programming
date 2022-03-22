#include <stdlib.h>
#include "main.h"

/**
 *int _abs - computes the absolute value of an integer
 *
 *@r: parameter
 *
 *Return: always  0 success
 *
 */

int _abs(int r)
{
	if (r < 0)
	{
		r = -1 * r;
	}
	else
	{
		r = 1 * r;
	}
}
