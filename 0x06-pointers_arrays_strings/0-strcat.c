#include "main.h"
/**
 * _strcat - concatenate two string
 * @dest: second string to be concatnated to src
 * @src: first string to be concatnated to dest
 * Return: result
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	;
		for (j = 0; src[j]; j++)
		{
			dest[i++] = src[j];
		}
	return (dest);
}
