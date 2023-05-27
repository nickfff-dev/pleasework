#include "main.h"
/**
* spltstr - splits a string into an array of words
* @str: the string to split
* Return: an array of words
*/
char **spltstr(char *str)
{
	int i, j, k, count;
	char **array;
	int word_length;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	count = count_words(str);
	array = malloc(sizeof(char *) * (count + 1));
	for (i = 0, j = 0; i < count; i++, j++)
	{
		while (str[j] == ' ')
		{
			j++;
		}
		word_length = get_word_length(str, j);
		array[i] = malloc(sizeof(char) * (word_length + 1));
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
		for (k = 0; k < word_length; j++, k++)
		{
			array[i][k] = str[j];
		}
		array[i][k] = '\0';
	}
	array[i] = NULL;
	return (array);
}
