#include "main.h"

/**
 * print_alphabet - prints alphabet
 * description: prints alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
