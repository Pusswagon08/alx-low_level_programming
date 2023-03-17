#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all the letters except q and e
 * Return: Always 0 on asuccess
 */

int main(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
