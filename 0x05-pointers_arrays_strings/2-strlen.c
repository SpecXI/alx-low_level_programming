#include <stdio.h>

/**
 * _strien - Returns length of dtring.
 * @str: The string to get the length
 * Return: The length of @str
 */

size_t _strlen(const char *str)
{
        size_t length = 0;
        while (*str++)
        length++;
        return (length);
}
