#include <stdio.h>
#include <stdlib.h>

/**
 * main - mutiple two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char const *argv[])
{
	int i, mul;
	(void)i;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
