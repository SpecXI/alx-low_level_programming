#include <stdio.h>

/**
 * _puts - Prints a string
 * @str: Str to print
 * Return: void
 */

void puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
