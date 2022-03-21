#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *
 *@b: parameters to be swapped
 *
 *@a: parameters to be swapped
 *
 *Return: nothing
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
