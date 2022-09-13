#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char lower;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
return (0);

}
