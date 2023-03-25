#include "main.h"

/**
 * _isdigit - Check if a cha is a digit
 * @x: The number to be checked
 * Return: 1 char that is a digit and 0 for one that is not
 */

int _isdigit(int x)

{

	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
