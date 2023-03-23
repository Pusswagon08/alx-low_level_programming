#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: parameter considered
 *
 */

void print_line(int n)
{
	int i = n;

	while (i != 0)
	{
		_putchar('_');
		i--;
	}
	_putchar('\n');
}
