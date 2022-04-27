#include "main.h"
/**
 * factorial - print factorial of number
 * 
 * @n: parameter
 * 
 * Return: print result
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
	return (0);
}
