#include "sort.h"

/**
 * bubble_sort - sort array lements from min to max value
 * @array: array of int to be sorted
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;
	bool swapped = true;

	if (!array || size < 2)
		return;

	n = size;
	while (swapped)
	{
		swapped = false;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		/* optimize by logically elinating final swap from last loop */
		n--;
	}
}
