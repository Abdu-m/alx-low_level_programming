#include "main.h"
/**
 * _strcpy - copies from src to dest
 * @dest: pointer to char
 * @src: pointer to char
 * Return: void
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
