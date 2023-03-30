#include "main.h"

/**
 * string_toupper - Changes all lowecase letters of str to upper.
 * @str: Str to be changed.
 * Return: A pointer to the changed str
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
