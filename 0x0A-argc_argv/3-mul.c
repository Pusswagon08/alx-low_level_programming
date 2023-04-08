#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main code block
 *
 * Description: program that multiplies two number
 *
 * @argc: arguement counter
 *
 * @argv: array that stores arguement
 *
 * Return: always 0 on (success)
 */

int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int k = i * j;

	if (argc != 3)
	printf("ERROR\n");
	else
	printf("%d\n", k);
	return (0);
}
