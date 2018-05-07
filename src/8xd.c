#include "8xd.h"
#include <string.h>
#include <wchar.h>
#include <sys/stat.h>

int main(char **args)
{
	if (strlen(args) == 0)
	{
		printf("\nUsage: 8xd [FILE] [DEST] -c\n");
		return;
	}
	else
	{
		// process arguments
	}

	// check if the path is valid using sys/stat.h
	struct stat path_stat;
	char path[100] = args[0];
	if (!stat(path,&path_stat))
	{
		wprintf(L"PathError: Source does not exist");
		return -1;
	}

	wprintf(L"8xd Version 1.1");
	wprintf(L"© lambda 2018");

	return 0;
}