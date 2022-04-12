#include "main.h"
/**
*_islower - return 1 if itis lower case or 0 otherwise
*@c: takes in a character
*Return: 0 (upper case) , 1 (lower case)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
