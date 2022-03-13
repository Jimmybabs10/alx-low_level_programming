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

a = 'a';
do{ 
putchar(a);
a++;
} while (a <= 'z');
putchar('\n');
return (0);
}
