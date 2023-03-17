#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int i = 97;
	while( i <= 122)
	{	
		putchar((char) i);
		i++;
	}
	putchar('\n');
	return (0);
}	
	
