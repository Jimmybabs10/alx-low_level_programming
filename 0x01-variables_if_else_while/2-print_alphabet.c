#include <stdio.h>

/**
 *main- displays the alphabet in lowercase
 *
 *Return: success (0)
 *
 */
int main(void)
{
char a;
char z;

a = 'a';
while (a <= 'z')
putchar(a);
++a;
putchar('\n');
return (0);
}
