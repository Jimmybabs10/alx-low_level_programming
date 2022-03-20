#include <ctype.h>
#include "main.h"

/**
 *_isalpha - checks for lowercase
 *
 *@c: parameter to pass for letters
 *
 *Return: 1 if it's lower and 0 if it's not lowr
 *
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
