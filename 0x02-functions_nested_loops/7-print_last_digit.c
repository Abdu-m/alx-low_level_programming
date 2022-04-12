#include "main.h"
/**
*print_last_digit - print last digit of digit
*@n: takes an integer
*Return: output
*/
int print_last_digit(int n)
{
	int last = n % 10;
	if (n < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
