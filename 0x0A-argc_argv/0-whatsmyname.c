#include "main.h"
#include <stdio.h>

/**
 * main - program that prints it's name
 *
 *@argc: arguement count
 *
 *@argv: arguement stored array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = argc;

	if (i > 0)
	printf("%s\n", argv[0]);
	return (0);
}
