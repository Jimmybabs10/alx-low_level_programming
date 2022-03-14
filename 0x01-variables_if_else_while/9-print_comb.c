#include  <stdio.h>

/**
 *main - single digits with a comma
 *
 *Return: Always 0
 *
 */

int main(void)
{
int num = '0';

while (num <= '8')
{
putchar(num);
putchar(',');
putchar(' ');
num++;
}
putchar('9');
putchar(',');
putchar('\n');
return (0);
}
