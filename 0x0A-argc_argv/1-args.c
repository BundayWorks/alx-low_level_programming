#include <stdio.h>

/**
 * main - program print number of argument passed
 * @argc: count of arguments
 * @argv: one dimensional arrays of string
 * Return: 0
 */

int main(int argc, char const **argv)
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
