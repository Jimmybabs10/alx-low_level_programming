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
alph = 'a';
num = '0';

while (num <= '9')
{
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
num++;
}
_putchar('\n');
}
