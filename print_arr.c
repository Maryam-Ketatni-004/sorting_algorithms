#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @arr: The array to be printed
 * @size: Number of elements in @arr
 */
void print_arr(const int *arr, size_t size)
{
	size_t i;

	i = 0;
	while (arr && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", arr[i]);
		++i;
	}
	printf("\n");
}
