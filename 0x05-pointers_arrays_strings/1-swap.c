#include <stdio.h>

/**
 * swap_int - Swaps the values of teo ints
 * @a: The first int to be swapped
 * b: The second int to be swapped
 * Return: Zero
 */

void swap_int(int *a, int *b)
/* the function that swaps the ints value */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
