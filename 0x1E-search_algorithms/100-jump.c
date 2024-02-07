#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t curr = step;
    size_t prev;
    size_t i;

    if (array == NULL)
        return -1;
    prev = 0;

    while (curr < size && array[curr] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

    for (i = prev; i <= (curr < size - 1 ? curr : size - 1); ++i)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
