#include "search_algos.h"

/**
  * linear_search - for a value in an array of integers use Linear Algo
  *
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    for (size_t i = 0; i < size; i++) {
        printf("Comparing %d to %d\n", array[i], value);
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}

