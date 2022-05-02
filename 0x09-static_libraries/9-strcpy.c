#include "main.h"
#include <stdio.h>

/**
 * _strcpy - strcpy
 * @dest: poiter to string
 * @src: poiter to string
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
