#include "main.h"

/**
 * rev_string - main function.
 * @s: Pointer, the string to print.
 * Description: reverses a string.
 * Return: none.
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[a])
	{
		a++;
	}

	a--;

	while (b < a + 1 / 2)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;
		a--;
		b++;
	}
}
