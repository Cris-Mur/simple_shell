#include "shell.h"

/**
 * error_msg - this function prints the error messages
 *
 * @file: contains a name of the file.
 * @buffer: contains a keyboard in from the user.
 * @counter: contains a number of a commands from the user.
 *
 * Return: void function.
 */

void error_msg(char *file, char *buffer, int counter)
{
	char *numberstr = _itoa(counter);

	write(1, file, _strlen(file));
	write(1, " ", 1);
	write(1, numberstr, (_strlen(numberstr)));
	write(1, ": ", 2);
	write(1, buffer, (_strlen(buffer) - 1));
	write(1, ": not found\n", 12); /* exit 127*/
	/*write(1,": command not found\n", 21); exit 0
	  write(1,": no such file or directory\n", 29); exit 0*/
}
