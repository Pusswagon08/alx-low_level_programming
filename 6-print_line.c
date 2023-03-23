#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: parameter considered
 */

void print_line(int n)
{
	int o;

	while (o < n)
	{
		_putchar('_');
		o++;
	}
	_putchar('\n');
}
