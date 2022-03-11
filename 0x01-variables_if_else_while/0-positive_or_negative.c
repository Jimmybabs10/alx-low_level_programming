#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this prints if the output is positive or negative
 *
 *Return: 0 (success)
 *
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d\n is zero", n);
}
else if (n > 0)
{
printf("%d\n is positive", n);
}
else
{
printf("%d\n is negative", n);
}
return (0);
}
