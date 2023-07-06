#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: binary number
 *
 * Return: binary representation of a number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
