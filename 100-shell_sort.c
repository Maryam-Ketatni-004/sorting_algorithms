#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort an array of integers order using the shell sort algorithm.
 * @arr: An array of integers.
 * @size: The size of array.
 *
 * Description: Uses the knuth interval sequence.
 */
void shell_sort(int *arr, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;
	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && arr[j - gap] > arr[j])
			{
				swap_ints(arr + j, arr + (j - gap));
				j -= gap;
			}
		}
		print_arr(arr, size)
	}
}
