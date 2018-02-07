#include "get_next_line.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

    fd = open("data.txt", O_RDONLY);
    int i = 0;
	while (get_next_line(fd, &line) == 1)
	{
		ft_putstr(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
}

