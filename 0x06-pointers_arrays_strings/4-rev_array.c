#include "main.h"

/**
 * reverse_array - Reverses the content of an array of ints.
 * @a: Array of int to be reversed
 * @n: Num of elements in array
 */

void reverse_array(int *a, int n)

{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
