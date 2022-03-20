#include "main.h"
/**
 *print_alphabet- prints alphabet in lower case
 *
 *Return: no return value
 *
 */

void print_alphabet(void)
{
char alph;
alph = 'z';

while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
}
