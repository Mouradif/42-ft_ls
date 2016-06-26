#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <termios.h>
#include <errno.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char **argv)
{
	DIR				*dir;
	struct dirent	*ent;
	char			*dname;
	int				attr;
	struct termios	term;
	struct stat		stats;

	dname = (argc > 1) ? argv[1] : ".";
	dir = opendir(dname);
	if (dir == NULL)
	{
		puts(strerror(errno));
		return (1);
	}
	while ((ent = readdir(dir)) != NULL)
	{
		puts(ent->d_name);
		attr = stat(ent->d_name, &stats);
		if (attr < 0)
			puts(strerror(errno));
	}
}
