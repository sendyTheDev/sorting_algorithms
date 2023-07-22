#include "sort.h"
/**
 * selection_sort - sorts all selecty like
 * @size: size of array
 * @array: array to sort
 */
void selection_sort(int *array, size_t size)
{
	int index = 0, min, tmp;
	size_t x, v;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min = array[x];
		for (v = x + 1; v < size; v++)
		{
			if (array[v] < min)
			{
				min = array[v];
				index = v;
			}
		}
		if (min != array[x])
		{
			tmp = array[x];
			array[x] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
