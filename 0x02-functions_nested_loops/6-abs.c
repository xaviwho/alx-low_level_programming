#include "main.h"

/**
 * _abs - computes the absolute value of any number
 * @n: number to be computed
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
