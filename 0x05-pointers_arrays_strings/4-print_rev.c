#include "main.h"

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
	int i = 0;
	int total_characters = 0;
	int c = 0;

	while (s[i] != 0)
	{
		i++;
	}
	total_characters = i - 1;

	for (c = 0; c <= total_characters; c++)
	{
		_putchar(str[total_characters -c]);
	}
	_putchar('\n');
}
