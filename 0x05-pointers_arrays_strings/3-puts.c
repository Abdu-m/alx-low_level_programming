#include "main.h"
/**
* _puts - print string
* @str: a pointer to int that will be updated
* Return: result
*/
void _puts(char *str)
{
	char *c;
	int m;

	c = str;
	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
