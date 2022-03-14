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

while (num <= '9')
{
putchar(num);
putchar(',');
putchar(' ');
num++;
}
putchar('\n');
return (0);
}
