#include "shell.h"

/**
 * prompt - this function is a principal interaction of a user in the system
 * @argv: contains a arguments of the main function.
 * Return: void function.
 */

void prompt(char **argv)
{
	char *buffer;
	size_t buffer_size = 1024;
	size_t buffer_pos;
	int counter = 0;

	buffer = malloc(buffer_size * 1);

	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	while (1)
	{
		counter++;
		if ((isatty(0)))
		{
			write(1, "$ ", 2);
			signal(SIGINT, handler);
			buffer_pos = getline(&buffer, &buffer_size, stdin);

			if (_strcmp(buffer, "exit\n") == 0)
				free(buffer), exit(130);

			if (buffer_pos == -1)
			{
				write(1, "\n", 1);
				free(buffer), exit(130);
			}
			else
				error_msg(argv[0], buffer, counter);
		}
		else
		{
			buffer_pos = getline(&buffer, &buffer_size, stdin);
			error_msg(argv[0], buffer, counter);
			break;
		}
	}

}
