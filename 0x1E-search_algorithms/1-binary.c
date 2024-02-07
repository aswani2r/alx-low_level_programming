#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if value is not present
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low =   0, high = size -   1, mid;
    size_t i;

    if (!array || !size)
        return (-1);

    while (low <= high)
    {
        mid = low + (high - low) /   2;
        printf("Searching in array: ");
        for (i = low; i <= high; i++)
            printf("%d ", array[i]);
        printf("\n");

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid +   1;
        else
            high = mid -   1;
    }
    return (-1);
}
