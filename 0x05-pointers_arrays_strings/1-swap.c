#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: parameter a
 *
 * @b: parameter b
 *
 */

void swap_int(int *a, int *b)
{
	int hold = *a;
	*a = *b;
	*b = hold;
}
