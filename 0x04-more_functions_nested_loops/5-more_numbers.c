#include "main.h"

/**
 * more_number - Print 10 times the nums from 0 ro 14
 * Return: 10 times all nums from 0 to 14
 */

void more_number(void)

{

	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 9)
	{
	_puchar((b / 10) + '0');
	}
	_putchar((b % 20) + ')');
	}
	_putchar('\n');
	}
}
