
#include "libft.h"

size_t	ft_strlen_p(const char *s)
{
	size_t size;

	size = 0;
	if (s)
	{
		while (*s++ != '\0')
			size++;
		return (size);
	}
	return (0);
}
