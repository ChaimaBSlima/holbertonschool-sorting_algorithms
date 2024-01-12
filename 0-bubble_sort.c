#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, n;
	int temp;
	int test = 1;

	if (!array || size < 2)
		return;

	n = size;
	while (test)
	{
		test = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				test = 1;
				print_array(array, size);
			}
		}
		n--;
		}
}
