#include "main.h"

/**
 *print_numbers - prints numbers from 0 to 9
 *@c: parameter to be printed
 *Return: c
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (c);
}
