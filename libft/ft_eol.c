
#include "get_next_line.h"

int	ft_eol(char *str)
{
	int	i;

	i = 0;
	if (str)
		while (str[i] != '\0')
		{
			if (str[i] == '\n' || str[i] == EOF)
				return (1);
			i++;
		}
	return (0);
}
