/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arobion <arobion@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 14:43:54 by arobion           #+#    #+#             */
/*   Updated: 2017/11/24 11:49:11 by arobion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	char    *line;
	int     fd; 
	int		i;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	//	while ((i = get_next_line(fd, &line)))
	//		dprintf(1, "retour fonction = %d\n", i);
	i = get_next_line(fd, &line);
	ft_strdel(&line);
	/*	dprintf(1, "retour fonction = %d\n", i);
	iint	fd1 = open(argv[2], O_RDONLY);
	int	fd2 = open(argv[3], O_RDONLY);
	int	fd3 = open(argv[4], O_RDONLY);
	int fd4 = open(argv[5], O_RDONLY);
	//	ft_putendl("1ER APPEL FICHIER 1");
	get_next_line(0, &line);
	//	ft_putendl("1ER APPEL FICHIER 2");
	get_next_line(fd2, &line);
	//	ft_putendl("2EME APPEL FICHIER 1");
	get_next_line(fd2, &line);
	//	ft_putendl("1ER APPEL FICHIER 3");
	get_next_line(fd1, &line);
	//	ft_putendl("2EME APPEL FICHIER 2");
	get_next_line(fd1, &line);
	//	ft_putendl("3EME APPEL FICHIER 1");
	get_next_line(fd2, &line);
	//	ft_putendl("2EME APPEL FICHIER 3");
	get_next_line(fd, &line);
	//	ft_putendl("3EME APPEL FICHIER 2");
	get_next_line(fd3, &line);
	get_next_line(fd2, &line);
	get_next_line(fd, &line);
	get_next_line(fd4, &line);
	get_next_line(fd4, &line);
	get_next_line(fd4, &line);
	get_next_line(fd4, &line);
	get_next_line(fd1, &line);
	get_next_line(fd3, &line);
	get_next_line(fd3, &line);
	get_next_line(fd2, &line);
	get_next_line(fd, &line);
	get_next_line(fd1, &line);
	get_next_line(fd2, &line);
	get_next_line(fd, &line);
*/
	return (0);
}
