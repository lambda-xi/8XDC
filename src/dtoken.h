#ifndef __DTOKEN_H
#define __DTOKEN_H

#include <stdio.h>

struct token;

FILE *load8xp(FILE *);
void unload8xp(FILE *);
void ret_token(char);

#endif //__DTOKEN_H