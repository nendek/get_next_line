
#include "libft.h"

char	*ft_strcpy_p(char *dest, const char *src)
{
	int i;

	i = 0;
	if (dest && src)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
