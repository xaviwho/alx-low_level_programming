#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{

	int length, j;
	/* j is a counter for  n bytes of src to be concatenated */
	/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
