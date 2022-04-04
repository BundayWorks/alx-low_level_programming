#include <stdio.h>

/**
 * main - print all argument recieved
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int i;
	
	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
