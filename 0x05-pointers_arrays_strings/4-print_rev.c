#include "main.h"
#include <string.h>

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
