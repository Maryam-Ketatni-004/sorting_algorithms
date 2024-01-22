#include "sort.h"

/**
 * get_max - Get the maximum value in an array in an array of integers.
 * @arr : an array of integers.
 * @size: The size of the array.
 *
 * Return: The maximum integer in the array.
 */
int gat_max(int *arr, int size)
{
	int max, i;

	for (max = arr[0], i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return (max);
}

/**
 * counting_sort -Sort an array of integers in ascending order using the counting sort algorithm.
 * @arr: Array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the counting array after setting it up.
 */
void counting_sort(int *arr, size_t size)
{
	int *count, *sorted, max, i;

	if (arr == NULL || size < 2)
		return;

	sorted = malloc(sizeof(int) * size);
	if (sorted == NULL)
		return;
	max = gat_max(arr, size);
	count = malloc(sizeof(int) * (max + 1));
	if ( count == NULL)
	{
		free(sorted);
		return;
	}

	for (i = 0; i < (max + 1); i++)
		count[i] = 0;
	for (i = 0; i < (int)size; i++)
		count[arr[i]] += 1;
	for (i = 0; i < (max + 1); i++)
		count[i] += count[i - 1];
	print_arr(count, max + 1);

	for (i = 0; i < (int)size; i++)
	{
		sorted[count[arr[i]] - 1] = arr[i];
		count[arr[i]] -= 1;
	}

	for (i = 0; i < (int)size; i++)
		arr[i] = sorted[i];

	free(sorted);
	free(count);
}
