#include "main.h"
/**
 * print_rev - print a string
 * @s: char pointer
 * Return: void
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	for (i = i - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
