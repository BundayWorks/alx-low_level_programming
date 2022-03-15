#include "main.h"

/**
 * print_alphabet - print the english alphebet from a-z
 *
 * Return: Nothing.
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
