/**
 * swap_int - reset to 98
 * @a: pointer to swap
 * @b: pointer to int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
