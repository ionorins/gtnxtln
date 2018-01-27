#include "get_next_line.h"

int main()
{
	char **line = NULL;
	get_next_line(0, line);
	ft_putstr(*line);

	return (0);
}
