#include "main.h"

/**
 * factorial - a function that finds the factorial of a number
 *
 * @n: parameter considered
 *
 * Return: 0 if less than 0
 */

int factorial(int n)
{
	int k;

	if (n < 0)
	return (-1);
	if (n <= 1)
	return 1;
	else
	k = n * factorial(n - 1);
	return (k);
}
