#include <stdio.h>

/**
 *main- prints the alphabet except q and e
 *
 *Return: Success (0)
 *
 */

int main(void)
{
int a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
