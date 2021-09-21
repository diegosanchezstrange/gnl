#include "get_next_line.h"
#include <fcntl.h>

int	main()
{
	int	fd;
	char	*r;

	fd = open("./test.txt", O_RDONLY);
	r = get_next_line(fd);
	free(r);
	r = get_next_line(fd);
	free(r);
	return (0);
}
