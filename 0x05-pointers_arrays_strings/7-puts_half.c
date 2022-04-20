#include "main.h"

/**
 * puts_half - ouput half
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int c = 0, n;

	while (str[c] != '\0')
		c++;
	if (c % 2 == 0)
		n = c / 2;
	else
		n = (c / 2) + 1;

	for (; n < c; n++)
		_putchar(str[n]);
	_putchar('\n');
}
