#ifndef ZELDA_H
#define ZELDA_H

#include <stdio.h>
#include <unistd.h>
/**
 * struct _envi - single linked list
 * @name: name of the enviroment variable
 * @content: single linked list of the content of the variable
 * @nxt: point of the next node
 *
 * Description: The environment variables save into
 * the structure
 */
typedef struct _envi
{
	char *name;
	struct _vari *content;
	struct _envi *nxt;
} envi_t;

/**
 * struct _vari - single linked list
 * @part: part of the variable
 * @nxt: point of the next node
 *
 * Description: The content of the enviroment variable
 */
typedef struct _vari
{
	char *part;
	struct _vari *nxt;
} vari_t;

#ifndef FUNCTIONS_
#define FUNCTIONS_

#include "halo.h"

envi_t *add_envi_end(envi_t **head, char *str);
void free_envi(envi_t *head);
vari_t *add_vari_end(vari_t **head, char *str);
void free_vari(vari_t *head);
envi_t *create();
size_t print_envi(envi_t *names);
size_t print_vari(envi_t *var);
char *_getname(char *str);
char *_getcont(envi_t **level, char *str);

#endif

#ifndef ENVI_VAR
#define ENVI_VAR

envi_t *envi;
envi_t *_path;
envi_t *_pwd;
#endif

#endif
