#include <stdio.h>

/**
 *main- prints the alphabet except q and e
 *
 *Return: Success (0)
 *
 */

int main(void)
{
char a = 'a';

while (a <= 'z')
{
if (a == 'e' || a == 'q')
continue;
putchar(a);
a++;
}
putchar('\n');
return (0);
}
