#include <stdio.h>
#include <stdlib.h>

/**
 * load an 8xp program
 * params: path = path to program in question
 * returns: 0 if the file is an 8xp and if there's enough memory, 1 otherwise
 */
FILE *load8xp(char *path)
{
	FILE *prog = fopen(path, "rb");
	if (prog == NULL)
		return NULL;
	// Check first 8 bytes for the header
	// if (first 8 bytes != actual 8xp header)
	return prog;
}

/**
 * free 8xp file from memory
 * params: FILE* prog
 * returns: nothing
 */
void unload8xp(FILE *prog)
{
	// this may entail more things...
	free(prog);
	return;
}

/**
 * look up corresponding token for current byte
 * params: byte to be read
 * returns: token associated with byte, if any, NULL otherwise
 */
void ret_token(char byte)
{
	return;
}