#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet 10x
 *
 *Return: returns nothing
 *
 */

void print_alphabet_x10(void)
{
char alph;
char num;
num = '0';

while (num <= '9')
{
alph = 'a';

while (alph <= 'z')
{
_putchar(alph);
alph++;
}
num++;
}
_putchar('\n');
}
