#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array using Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where @value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1;

    if (!array || !size)
        return (-1);

    while (low <= high && value >= array[low] && value <= array[high])
    {
       size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
		return (-1);

        if (array[pos] < value)
            low = pos + 1;
	else
		high = pos - 1;
    }
    printf("Value [%d] is not present in the array\n", value);
    return (-1);
}
