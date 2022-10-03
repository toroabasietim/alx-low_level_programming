#include "main.h"

/**
 * main - prints arguments count
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 **/

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%i\n", argc - 1);
	return (0);
}
