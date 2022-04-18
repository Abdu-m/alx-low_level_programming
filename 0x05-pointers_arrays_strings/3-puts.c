#include "main.h"
/**
* _puts - print string
* @str: a pointer to int that will be updated
* Return: result
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
