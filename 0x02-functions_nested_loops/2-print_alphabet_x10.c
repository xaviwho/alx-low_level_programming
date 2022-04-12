#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 * description: prints alphabet x10
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
