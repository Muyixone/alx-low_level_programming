#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * strtow- Splits a string into two words.
  * @str : Array of characters parameter to be splitted.
  *
  * Return: Returns a pointer to splitted strings
*/

char **strtow(char *str)
{
	int numb_of_words;
	int inner_word;
	int word_indx;
	char *start;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	numb_of_words = word_count(str);
	if (numb_of_words == 0)
		return (NULL);
	words = malloc((numb_of_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	inner_word = 0;
	word_indx = 0;
	start = NULL;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (inner_word)
			{
				words[word_indx++] = substring_duplicate_range(start, str);
				inner_word = 0;
			}
		}
		else
		{
			if (!inner_word)
			{
				start = str;
				inner_word = 1;
			}
		}
		str++;
	}
	if (inner_word)
		words[word_indx] = substring_duplicate_range(start, str);
	words[numb_of_words] = NULL;
	return (words);
}

/**
  * word_count - Counts the number of words in the input string.
  * @str: String to be counted.
  *
  * Return: Returns number of words counted.
*/
int word_count(char *str)
{
	int count = 0;
	int word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			word = 0;
		}
		else
		{
			if (word == 0)
			{
				count++;
				word = 1;
			}
		}
		str++;
	}
	return (count);
}

/**
  * substring_duplicate_range- Duplicates a substring.
  * @start: The start of a substring.
  * @end: The end of a substring.
  *
  * Return: A pointer to the subtring is returned.
*/

char *substring_duplicate_range(char *start, char *end)
{
	int length;
	char *ptr;
	int i;

	length = end - start;
	ptr = malloc(length + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = start[i];
	ptr[length] = '\0';
	return (ptr);
}
