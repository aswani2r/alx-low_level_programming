#include <stdio.h>
#include <stdbool.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);

    int jump = sqrt(size);
    int prev =  0;

    while (array[min(jump, size)-1] < value)
    {
        prev = jump;
        jump += sqrt(size);
        if (prev >= size)
            return (-1);
    }

    while (array[prev] < value)
    {
        prev++;
        if (prev == min(jump, size))
            return (-1);
    }

    if (array[prev] == value)
        return (prev);

    return (-1);
}
