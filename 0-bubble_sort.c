#include "sort.h"

/**
 * swap_func - Swap two ints in an array.
 * @a: first int to swap.
 * @b: second int to swap.
 */
void swap_func(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array of ints in ascending order.
 * @array: An array of ints to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, length = size;
	bool is_bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (is_bubbly == false)
	{
		is_bubbly = true;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_func(array + i, array + i + 1);
				print_array(array, size);
				is_bubbly = false;
			}
		}
		length--;
	}
}
