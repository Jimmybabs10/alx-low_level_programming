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
char A;

a = 'a';
A = 'A';
do {
putchar(a);
a++;
} while (a <= 'z');


while (A <= 'Z')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
