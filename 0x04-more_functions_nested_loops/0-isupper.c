#include "main.h"
/**
 *_isupper - check for upper case
 *@c: print int
 *Return: 0 or 1(success)
*/
int _isupper(int c)
{
	if (c >= 'a' && c<= 'z')
		return (1);
	else
		return (0);
}
