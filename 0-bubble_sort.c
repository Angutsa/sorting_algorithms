#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the bubble sort algorithm
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, swap = 0, i;

	/* Check inputs */
	if (array == NULL || size < 1)
		return;

	/* Initial check if sorted */
	for (i = 0; i < (int) size; i++)
	{
		if (array[i] > array[i + 1])
		{
			swap = 1;
			break;
		}
	}

	if (swap == 0)
		return;

	/* Bubble sort and check if sorted */
	while (swap != 0)
	{
		swap = 0;

		for (i = 0; i < ((int) size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swap++;
			}
		}
	}
}
