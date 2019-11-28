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
	pid_t son;

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
				break;
			if (buffer_pos == EOF)
                        {
                                write(1, "\n", 1), exit(0);
                        }

			if (_strcmp(buffer, "\n") == 0)
				continue;

			son = fork();
			if (son == -1)
				free(buffer), perror("Error:");

			if (son == 0)
			{
	        		error_msg(argv[0], buffer, counter);
			}
		}
		else
		{
			buffer_pos = getline(&buffer, &buffer_size, stdin);
			error_msg(argv[0], buffer, counter);
			break;
		}
	}

}
