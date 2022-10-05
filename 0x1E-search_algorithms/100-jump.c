#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches a value in sorted aray
 * using jump sort algorithm
 * @array: the array to look value at
 * @size: size of @array
 * @value: the integer to look for
 * Return: index of the value found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, step;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size), start = 0, end = step;
	while (start < size)
	{
		printf("Value checked array[%lu] = [%d]", start, array[start]);
		if (end < size)
		{
			if (array[start] <= value && value <= array[end])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", start, end);
				break;
			}
		}
		else
			if (array[start] <= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", start, end);
				break;
			}
		start = end;
		end = start + step;
	}
	while (start <= end)
	{
		if (start == end)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
