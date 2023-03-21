#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @c: parameter considered
 *
 * Return: return k
 */

int print_last_digit(int c)
{
	int k;

	k = c % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}

