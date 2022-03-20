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
int num;
alph = 'a';
num = 1;

while (num <= 10)
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
