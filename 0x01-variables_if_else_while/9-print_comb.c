#include <stdio.h>
/**
 *main - combination of single digit number
 *Return: 0 (success)
*/
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if(num == 57)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
