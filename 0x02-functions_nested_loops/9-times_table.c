#include "main.h"
#include <stdio.h>

/**
 *times_table - prints the 9 times table
 *Return: nothing
 */

void times_table(void)
{
	int a = 0;
	int b;
	int c;

	while (a <= 9)
	{
		b = 0;

		while (b <= 8)
		{
			c = a * b;
			printf("%d, ", c);
			b++;
		}
		c = a * b;
		printf("%d\n", c);
		a++;
	}
}
