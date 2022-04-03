#include <stdio.h>

/**
 * main - program print number of argument passed
 * @argc: count of arguments
 * @argv: one dimensional arrays of string
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)**argv;
	printf("%d\n", argc);
	return (0);
}
