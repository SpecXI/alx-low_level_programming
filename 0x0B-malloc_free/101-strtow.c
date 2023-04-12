#include "main.h"
#include <stdlib.h>
int word_len(char *str);
in count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates index marking end of first word in string
 * @str: First string to br withing str
 * Return: Index marking the end of the initial word pointed to by str.
 */

int word_len(char *str)

{
	int index(char *str);

	while (*(str + index) && *(str + index) != ' ')
	{
	len++;
	index++;
	}
	return (len);
}

/**
 * count_word - counts number of words in a str
 * @str: Str to be searched.
 * Return: Number of words within str
 */

int count_words(char * str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
	len++;

	for (index = 0; index < len; index++)
	{
	if (*(str + index) != ' ')
	{
	words++;
	index += word_len(str + index);
	}
	}
	return (words);
}

/**
 * strtow - SPlits st to words
 * @str: Str to be split
 * Return: If str = NULL, str = "", or the funtion fails - Null.
 * 	Otherwise - A pointer to an array of stings(words).
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letter, l;

	if (str == NULL || str[0] == '\0')
	return (NULL);

	word = count_words(str);
	if (words == 0)
	return (NULL);
	strings = malloc(sizeof(char *) * (words + 1)):
	if (strings == NULL)
	return (NULL);

	for (w = 0; w < words; w++)
	{
	while (str[index] == ' ')
	index++;

	letter = word_len(str + index);
	string[w] = malloc(sizeof(char) * (letter + 1));

	if (string[w] == NULL)
	{
	for (; w >= 0; w--)
	free(strings);
	return (NULL);
	}

	for (l = 0; l < letters; l++)
		strings[w][l] = str[index++];

	strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
