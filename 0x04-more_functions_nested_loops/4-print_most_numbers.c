#inlude "main.h"

/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Description: Print the numbers the numbers excluding 2 and 4
 * Return: nums from 0 to 9
 */

void print_most_numbers(void)

{

	int a = 0;

	for (; a <= 9; a ++)
	{
	if (x == 2 || a == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
