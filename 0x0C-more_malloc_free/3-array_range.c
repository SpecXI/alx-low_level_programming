#include "main.h"
#include <stdlib.h>

/**
 * array_range - .
 * @min: .
 * @max: .
 * Return: int value
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (main > max)
		return(NULL);

	a = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (a == NULL)
		return (NULL);
	while (main <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
