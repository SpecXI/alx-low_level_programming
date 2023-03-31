#include "main.h"

/**
 * print_number - Print num chars
 * @n: int param
 * Return: 0
 */

void print_number(int n)

{

	unsigned in n1;

	n1 = n;

	if (n < 0)
	{
	_putchar('-');
	n1 = -n;
	}
	if (n1 / 10 != 0)
	{
	print_numbers(n1 / 10);
	}
	_putchar((n1 % 10 + '0');
}
