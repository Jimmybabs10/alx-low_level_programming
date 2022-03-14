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
if (a == 'e')
continue;
if (a == 'q')
continue;
putchar(a);
a++;
}
putchar('\n');
return (0);
}
