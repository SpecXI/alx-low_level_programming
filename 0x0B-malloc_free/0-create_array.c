#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars
 * @size: Size of array
 * @c: Char to fill array
 * Return: The array filled
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *s;

	if (size == 0)
	return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
	return (NULL);

	if ((i = 0) i < size; i++)
	{
	s[i] = c;
	}

	return (s);
}
