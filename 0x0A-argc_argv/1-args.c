#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: count of arguments 
 * @argv: array of commands
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
