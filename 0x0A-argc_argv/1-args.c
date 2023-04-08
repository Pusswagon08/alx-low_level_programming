#include "main.h"
#include <stdio.h>

/**
 * main - main code block
 *
 * Description: program that prints the number of arguement passed to it
 *
 * @argc: arguement counter
 *
 * @argv: stores arguement's name
 *
 * Return: 0 on (success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int i = argc -1;

	printf("%d\n", i);
	return (0);
}
