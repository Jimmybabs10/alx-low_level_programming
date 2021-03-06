#include "main.h"

/**
 *_strcat - appends the src string to the dest string,overwriting the
 *terminating null byte at the end of dest and then adds a terminating nullbyte
 *@dest: a pointer to a character
 *@src: a pointer to a character
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
