#include "function_pointers.h"

/**
 * print_name - prints a name as a string
 * @name: Pointer to the first character in the string
 * @f: Pointer to the function to be used to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
