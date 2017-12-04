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

static int			ft_read(const int fd, char **save)
{
	char	*tmp;
	char	*buff;
	size_t	end;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 1;


	while (j <= 0)
	{
		if (!(buff = ft_strnew(BUFF_SIZE)))
			return (-1);
		if (!j && *save)
		{
			tmp = ft_strdup(*save);
			ft_strdel(save);
			*save = ft_strnew(BUFF_SIZE * k);
			ft_strcpy(*save, tmp);
			ft_strdel(&tmp);
		}
		else
			*save = ft_strnew(BUFF_SIZE);
		if ((int)(end = read(fd, buff, BUFF_SIZE)) == -1)
			return (-1);
		ft_strcat(*save, buff);
		ft_strdel(&buff);
		while (save[0][i] != '\0')
		{
			if (save[0][i] == '\n' || save[0][i] == (char)EOF)
				j++;
			i++;
		}
		if (end == 0)
			return (0);
		k++;

	}
	return (1);
}

int	ft_isin(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' || str[i] == EOF)
			return (1);
		i++;
	}
	return 0;
}

static int			ft_cpy(char **line, int fd, char **str)
{
	char	*tmp;
	int	i;

	i = 0;
	if (!*str)
		ft_read(fd, str);
	if (str[0] != '\0')
	{
		if (!(ft_isin(*str)))
			ft_read(fd, str);
		i = ft_eol(*str, '\n');
		if (!(*line = ft_strsub(*str, 0, i)))
			return (-1);
		dprintf(1, "str = %s|\n", *str);
		i++;
		if (i > (int)ft_strlen(*str))
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
	static t_gnl_list	*list;
	t_gnl_list		*cursor;

	cursor = list;
	if (!list)
	{
		if (!(list = ft_memalloc(sizeof(t_gnl_list))))
			return (-1);
		list->fd = fd;
		return (ft_cpy(line, fd, &list->data));
	}
	if (cursor)
	{
		while (cursor->next != NULL && cursor->fd != fd)
			cursor = cursor->next;
		if (cursor->fd == fd)
			return(ft_cpy(line, fd, &cursor->data));
		else
		{
			if (!(cursor = ft_memalloc(sizeof(t_gnl_list))))
				return (-1);
			cursor->fd = fd;
			return (ft_cpy(line, fd, &cursor->data));
		}
	}
	return (0);
}
