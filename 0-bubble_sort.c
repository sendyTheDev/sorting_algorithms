#include "sort.h"

/**
 * bubble_sort -complexity of the Bubble sort algorithm
 * @array: array to sort
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, newsize = size;
	int tmp, bubbly;

	if (array == NULL || size < 2)
		return;
	while (newsize)
	{
		bubbly = 0;
		for (x = 0; x < newsize - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				tmp = array[x + 1];
				array[x + 1] = array[x];
				array[x] = tmp;
				print_array(array, size);
				bubbly = 1;
			}
		}
		newsize--;
		if (!bubbly)
			break;
	}
}
