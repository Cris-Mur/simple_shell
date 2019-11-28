#include "shell.h"

/**
 * main - Imput function for the program
 * @argc: ARGument Counter
 * @argv: ARGument Vector
 * @env: ENviroment Variables
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[], char *env[])
{
	_getenv(env);
	//print_envi(envi);
	(void)argc;
	prompt(argv);
	return (0);
}
