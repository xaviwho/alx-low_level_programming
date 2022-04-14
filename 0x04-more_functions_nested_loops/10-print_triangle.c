#include "main.h"

/**
 * print_triangle - print triangle
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int i, j;

	i = 0;
	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			if (i < ((size - j) - 1))
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
