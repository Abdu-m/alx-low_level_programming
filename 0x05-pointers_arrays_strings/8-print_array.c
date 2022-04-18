#include "main.h"
#include <stdio.h>
/**
 * print_array - print n element of an array
 * @a: pointer 
 * @n: return value
 * Return: void
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < 0)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		printf(", ");
		i++;
	}
	printf("\n");
}
