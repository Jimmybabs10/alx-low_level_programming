#include "main.h"

/**
 *_isdigit - checks for a digit
 *@c: argument to be checked for
 *Return: 0 if failed 1 if success
 */

int _isdigit(int c)
{

	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4'
|| c == '5' || c == '6' || c == '9' || c == '8' || c == '7')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
