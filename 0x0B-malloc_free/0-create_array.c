#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: the string
 * Return: a character
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);

	else if (ptr == NULL)
		return (NULL);

	else
		for (a = 0; a < size; a++)
			ptr[a] = c;
	return (ptr);
	free(ptr);
}
