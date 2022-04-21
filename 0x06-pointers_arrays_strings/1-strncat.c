#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string to be concatenated
 * @src: sstring to be concatenated until n limit
 * @n: numbr of bytes that will be used from src
 * Return: pointer to resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = dest[j];
	}
	return (dest);
}
