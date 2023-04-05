#include "main.h"

/**
 * _pow_recursion - funtion that find the of x raise to power y
 *
 * @x: parameter considered
 *
 * @y: power parameter
 *
 * Return: if y < 0 return -1 otherwise return value
 */

int _pow_recursion(int x, int y)
{
	int k;

	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	else
	k = x * _pow_recursion(x, (y - 1));
	return (k);
}
