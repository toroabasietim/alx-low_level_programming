#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies a string.
 * @dest: character to copy.
 * @src: character to copy.
 * Return: A character.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
