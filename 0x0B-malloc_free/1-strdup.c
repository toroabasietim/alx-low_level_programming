#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * @str: the new string
 * Return: a character
 **/

char *_strdup(char *str)
{
	char *ptr;
	int a, len = 0;

	if (str == NULL)
		return (NULL);

	else
		for (a = 0; str[a]; a++)
			len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	else
		for (a = 0; a < len; a++)
			ptr[a] = str[a];
	return (ptr);
	free(ptr);
}
