#include "main.h"
/**
**char *_strcpy- a function that copies the string pointed to by src,
*including the terminating null byte (\0),
*to the buffer pointed to by dest
*@dest: copy tom
*@src:copy from
*Return: returns dest
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

