#include "main.h"
#include <stdio.h>

/**
 * main - main code block
 *
 * Description: a program that prints all arguement passed to it
 *
 * @argc: arguement counter
 *
 * @argv: array that stores arguement
 *
 * Return: always 0 on (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
