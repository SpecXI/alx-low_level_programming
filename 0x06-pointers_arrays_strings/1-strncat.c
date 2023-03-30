#include "main.h"

/**
 * _strncat - Concatenates two str using an inputted amount of bytes from the src.
 * @dest: The str to be appended
 * @src: The string to append to dest
 * @n: The number of bytes
 * Return: A pointer to String dest
 */

char *strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
\
