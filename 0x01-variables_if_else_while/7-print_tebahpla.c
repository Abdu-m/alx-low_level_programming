#include <stdio.h>
/**
 *main - print alphabet in reverse order
 *Return: o (success)
*/
int main(void)
{
char c;
for (c = 122; c >= 97; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
