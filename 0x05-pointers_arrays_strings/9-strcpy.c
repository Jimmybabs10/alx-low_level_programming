#include "main.h"

/**
 *_srcpy - copies the strin pointed to by src, including the
 *terminatin nullbyte (\0) to the buffer pointed to by dest
 *@src: copier
 *@dest: destionation of the character
 *Return: void
 */

char *_strcpy(char *dest, char *src)
{
        int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
