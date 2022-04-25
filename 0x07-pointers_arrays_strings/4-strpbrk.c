#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such bytes is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; *(accept + i) != 0; i++)
		{
			if (*s == *(accept + i))
				return (s);
		}
		s++;
	}
	return (0);
}
