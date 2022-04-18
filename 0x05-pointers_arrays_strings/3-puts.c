#include "main.h"
/**
* _puts - print string
* @str: a pointer to int that will be updated
* Return: result
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_puts(str[i]);
	}
	_puts('\n');
}
