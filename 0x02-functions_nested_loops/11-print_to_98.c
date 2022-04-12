#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from a given number up to 98
 * @n: the number to start from
 * Return: Nothing, Void
 */
void print_to_98(int n)
{

	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}
