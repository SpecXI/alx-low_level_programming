#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints lowercase and uppercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
