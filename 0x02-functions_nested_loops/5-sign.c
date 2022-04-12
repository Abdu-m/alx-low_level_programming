#include "main.h"
/**
*print_sign - diplay sign of numbers
@n: takes an integer
*Return: 0 (success)
*/
int print_sign(int n)
{
if (n > 0)
putchar('+');
else if (n < 0)
putchar('-');
else
putchar('0');
return (0);
}
