#include "main.h"

/**
 * _strcmp - Compares 2 strings.
 * @s1: First string to compare.
 * @s2: Second string to sompare.
 * Return: if s1 < s2, negative difference.
 * If s1 == s2, 0.
 * If s1 > s2, positive difference.
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
