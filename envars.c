#include "shell.h"

int _getenv( char **env)
{
	int i;
        char *name, *env_line, *cont;
	envi = create();
	 for (i = 0; env[i] != 00; i++)
	 {
		 env_line = _strdup(env[i]);
		 add_envi_end(&envi, _getname(env_line));
		 name = env_line;
		 env_line = env[i];
		 cont = _getcont(&envi, env_line);
	 }
	 return (0);
}

/*
	if ((stat("/bin/ls", &st)) == 0)
		execve("/bin/ls", arg, NULL);
	return (0);
*/
