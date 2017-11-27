#include "libft.h"

size_t	ft_strlen_at_p(const char *s, char c)
{
	size_t size;

	size = 0;
	if (s)
	{
		while (*s++ != '\0' || *s != c)
			size++;
		return (size);
	}
	return (0);
}
