#include <stdio.h>

/**
 * _putd - Prints a string
 * @str: Str to print
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
