#include <stdio.h>

/**
 *main - prints all the hexadecimal characters
 *
 *Return: always 0
 *
 */

int main(void)
{
int hex = '0';
int a = 'a';
while (hex <= '9')
{
putchar(hex);
hex++;
}
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
