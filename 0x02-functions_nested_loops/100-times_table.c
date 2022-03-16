#include "main.h"

/**
 * print_times_table - print time table
 * @num : serves as the parameter passed in
 * Return : return an integer
*/

void print_times_table(int num)
{
	int a;
	int b;
	int out;

	a = 0;
	if (num < 0 || num > 15)
		return;
	while (a <= num)
	{
		b = 0;
		while (b <= num)
		{
			out = a * b;
			if (b == 0)
			{
				_putchar('0' + out);
			}
			else if (out < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + out);
			}
			else if (out < 100)
			{
				_putchar(' ');
				_putchar('0' + out / 10);
				_putchar('0' + out % 10);
			}
			else
			{
				_putchar('0' + out / 100);
				_putchar('0' + (out - 100) / 10);
				_putchar('0' + out % 10);
			}

			if (b < num)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;

	}
}
