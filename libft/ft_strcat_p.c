#include "libft.h"

char	*ft_strcat_p(char *dest, const char *src)
{
	int	dest_length;
	int i;

	dest_length = 0;
	i = 0;
	if (dest && src)
	{
		while (dest[dest_length] != '\0')
			dest_length++;
		while (src[i] != '\0')
		{
			dest[dest_length + i] = src[i];
			i++;
		}
		dest[dest_length + i] = '\0';
		return (dest);
	}
	return (NULL);
}
