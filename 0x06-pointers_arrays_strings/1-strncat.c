#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: parameter to be entered
 *@src: parameter to be entered
 *@n: parameter to be entered
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest = '\0';
	return (dest);
}
