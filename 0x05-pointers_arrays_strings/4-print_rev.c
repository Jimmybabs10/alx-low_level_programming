#include "main.h"
#include <publib.h>

/**
 *print_rev -  prints a string in reverse
 *
 *@s: string parameter
 *
 *Return: nothing
 *
 */

void print_rev(char *s)
{
	strrev(s);
	_putchar('\n');
}
