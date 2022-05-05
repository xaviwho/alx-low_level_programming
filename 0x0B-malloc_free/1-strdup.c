#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create a duplicate array
 * @str: the string to copy
 * Return: pntr to dup, or NULL if str NULL or insufficient mem
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	/* get size of str */
	while (str[size])
		++size;

	/* allocate memory for cpy buffer, size + 1 for NULL byte */
	arr = malloc(sizeof(char) * size + 1);

	if (arr != NULL)
	{
		/* repurpose size */
		size = 0;

		/* copy values over */
		while (str[size])
		{
			arr[size] = str[size];
			++size;
		}
		arr[size] = '\0';
		return (arr);
	}
	else
	{
		free(arr);
		return (NULL);
	}
}
