#include <stdlib.h>
#include <stdio.h>

/**
 * print_arrays - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_arrays(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
	if (i > 0)
		printf(", ");
	printf("%d", array[i]);
	++i;
	}
	printf("\n");
}

