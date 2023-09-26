#include "sort.h"

/**
 * swap_func - Swap two integers in an array.
 * @a: 1st integer to swap.
 * @b: 2nd integer to swap.
 */
void swap_func(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t sort_gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (sort_gap = 1; sort_gap < (size / 3);)
		sort_gap = sort_gap * 3 + 1;

	for (; sort_gap >= 1; sort_gap /= 3)
	{
		for (i = sort_gap; i < size; i++)
		{
			j = i;
			while (j >= sort_gap && array[j - sort_gap] > array[j])
			{
				swap_func(array + j, array + (j - sort_gap));
				j -= sort_gap;
			}
		}
		print_array(array, size);
	}
}
