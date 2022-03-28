#include "main.h"

/**
 *print_numbers - prints numbers from 0 to 9
 * parameter to be printed
 *Return: c
 */

void print_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
