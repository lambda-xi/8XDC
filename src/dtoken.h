#ifndef __DTOKEN_H
#define __DTOKEN_H

#include <stdio.h>

void load8xp(FILE*);
void unload8xp(FILE*);
// Return token associated with the byte read
void lookup(int);

#endif //__DTOKEN_H