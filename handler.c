#include "shell.h"

/**
 * handler - contains a handler in case of ctrl-c
 * @x: unused variable
 * Return: void function.
 */

void handler(int x)
{
	(void)x;
	write(1, "\n$ ", 3);
}
