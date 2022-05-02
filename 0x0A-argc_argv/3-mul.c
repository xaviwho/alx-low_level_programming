#include <stdio.h>
#include <stdlib.h>
#define UNUSED(a) (void)(a)

/**
 * main - main function
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
