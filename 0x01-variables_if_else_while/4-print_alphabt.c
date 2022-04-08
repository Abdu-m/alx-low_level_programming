#include <stdio.h>
/*
 *main - lower case
 *Return: 0 if success
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if ( c == 'e' || c == 'q' ){
continue;
}
else
putchar(c);
}
putchar('\n');
return (0);
}
