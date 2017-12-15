/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_lineV2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 10:00:12 by pnardozi          #+#    #+#             */
/*   Updated: 2017/12/01 10:06:07 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			ft_eol(char const *s, int c)
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

static int			ft_read(const int fd, char *save)
{
	char *buff;
	size_t end;

	if (!(buff = ft_strnew(BUFF_SIZE)))
		return (-1);
	if ((end = read(fd, buff, BUFF_SIZE)) == -1)
		return (-1);
	ft_strcpy(save, buff);
	ft_strdel(&buff);
	if (end == 0)
		return (0);
	return (1);
}

static int			ft_cpy(char **line, int fd, char **str)
{
	char	*tmp;
	int	i;
	
	i = 0;
	if (!*str)
	{
		if (!(*str = ft_strnew(BUFF_SIZE)))
			return (-1);
		ft_read(fd, *str);
	}
	if (str[0] != '\0')
	{
		i = ft_eol(*str, '\n');
		if (!(*line = ft_strsub(*str, 0, i)))
			return (-1);
		i++;
		if (i > ft_strlen(*str))
		{
			free(str);
			*str = ft_strnew(1);
			*str [0] = '\0';
			return (1);
		}
		tmp = ft_strsub(*str, i, ft_strlen(*str) - i);
		ft_strdel(str);
		*str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char	*save;

	return (ft_cpy(line, fd, &save));
	return (0);
}
