#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>

int	main()
{
    int 	fd;
    char	*res;

    fd = open("./test.txt", O_RDONLY);

	res = get_next_line(fd);
	printf("res1 : --%s--\n", res);
	free(res);
	res = get_next_line(fd);
	printf("res1 : --%s--\n", res);
	free(res);
	return (0);
}
