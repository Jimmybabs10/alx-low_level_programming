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

while (hex <= 'f')
{
putchar(hex);
}
putchar('\n');
return (0);
}
