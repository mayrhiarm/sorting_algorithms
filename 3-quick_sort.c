#include "sort.h"
/**
*swaps - the positions of two elements into an array
*@array: array
*@item1: array element
*@item2: array element
*/
void swaps(int *array, ssize_t item1, ssize_t item2)
{
	int tmp;

	tmp = array[item1];
	array[item1] = array[item2];
	array[item2] = tmp;
}
/**
 *lomuto_partitions - lomuto partitions sorting scheme implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: size array
 *Return: return the position of the last element sorted
 */
int lomuto_partitions(int *array, ssize_t first, ssize_t last, size_t size)
{
	int pivot = array[last];
	ssize_t current = first, finder;

	for (finder = first; finder < last; finder++)
	{
		if (array[finder] < pivot)
		{
			if (array[current] != array[finder])
			{
				swaps(array, current, finder);
				print_arrays(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[last])
	{
		swaps(array, current, last);
		print_arrays(array, size);
	}
	return (current);
}
/**
 *qs - quicksort algorithm implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: array size
 */
void qs(int *array, ssize_t first, ssize_t last, int size)
{
	ssize_t position = 0;


	if (first < last)
	{
		position = lomuto_partitions(array, first, last, size);

		qs(array, first, position - 1, size);
		qs(array, position + 1, last, size);
	}
}
/**
 *quick_sorts - It prepares the terrain to quicksort algorithm
 *@array: array
 *@size: array size
 */
void quick_sorts(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size);
}

