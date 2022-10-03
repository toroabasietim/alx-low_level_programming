#include <stdio.h>

/**
 * main - prints its program name, followed by a new line
 * @argc: unused variable
 * @argv: argument vector
 * Return: always 0
 **/

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
