#include "main.h"

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
return (0);
}
