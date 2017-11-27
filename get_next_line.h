/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:40:50 by pnardozi          #+#    #+#             */
/*   Updated: 2017/11/27 13:40:53 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# define BUFF_SIZE 32
# include "libft/libft.h"

typedef	struct		s_gnl
{
	char			*data;
	int				fd;
	struct s_gnl	*next;
}					t_gnl_list;
int					get_next_line(const int fd, char **line);

#endif
