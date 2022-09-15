#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int d;
	int s;

	if (n > 0)
	{
		for (d = 1; d <= n; d++)
		{
			for (s = 1; s < d; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
