#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: gives the count of arguements
 * @argv: array of the program command line arguments
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return 0;
}
