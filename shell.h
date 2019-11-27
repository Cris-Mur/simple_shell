#ifndef SHELL_H
#define SHELL_H

#ifndef HEADERS_
#define HEADERS_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <string.h>

#endif /*libs*/

#ifndef STRUCTURES_
#define STRUCTURES_

#include "zelda.h"

#endif /* structs */

#ifndef GENERIC_
#define GENERIC_

#include "halo.h"

#endif /* _str...things */

int _getenv(char **env);

void prompt(char **argv);
void error_msg(char *file, char *buffer, int counter);
char *_itoa(int num);
void handler(int x);

#endif /* all shell.h*/
