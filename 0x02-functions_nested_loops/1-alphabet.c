#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char lower;

	lower = 'a';

	while (lower <= 'z')
	{
		_putchar(alpha);
		lower++;
	}
	_putchar('\n');
}
