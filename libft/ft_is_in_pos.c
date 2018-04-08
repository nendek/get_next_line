
#include "get_next_line.h"

int	ft_is_in_pos(char const *s, int c)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0' && s[i] != (char)c && s[i] != EOF)
			i++;
		return (i);
	}
	return (0);
}
