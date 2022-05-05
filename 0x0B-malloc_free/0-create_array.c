#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: the size of the array
 * @chr: the character to use
 * Return: pointer to array, or NULL if size = 0
 */
char *create_array(unsigned int size, char chr)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size != 0 && arr != NULL)
	{
		for (i = 0; i < size; ++i)
		{
			arr[i] = chr;
		}
		return (arr);
	}
	else
		return (NULL);
}
