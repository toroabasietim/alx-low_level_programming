#include "main.h"

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: argument vector / strings
 * Return: always 0
 **/

int main(int argc, char **argv)
{
	int times;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		times = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", times);
		return (0);
	}
}
