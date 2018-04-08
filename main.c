/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:32:34 by pnardozi          #+#    #+#             */
/*   Updated: 2017/11/29 15:56:28 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int		main(int argc, char **argv)
{
	char    *line;
	int     fd; 
	int		i;
	if (argc)
		i = 0;
	i = 0;
		fd = open(argv[1], O_RDONLY);
		i = get_next_line(fd, &line);
				dprintf(1, "retour fonction = %d phrase : %s\n", i, line);
//		i = get_next_line(1, &line);
//		printf("line : %s\n", line);
/*		ft_strdel(&line);
		i = get_next_line(fd, &line);
		printf("line : %s\n", line);
		ft_strdel(&line);
	i = get_next_line(fd, &line);
		printf("line : %s\n", line);
		ft_strdel(&line);
		i = get_next_line(fd, &line);
		printf("line : %s\n", line);
		ft_strdel(&line);



	int	fd1 = open(argv[1], O_RDONLY);
	int	fd2 = open(argv[2], O_RDONLY);
	int	fd3 = open(argv[3], O_RDONLY);
	ft_putendl("1ER APPEL FICHIER 1");
	get_next_line(fd1, &line);
	
	dprintf(1,"%s\n", line);
	ft_putendl("1ER APPEL FICHIER 2");
	get_next_line(fd2, &line);
	dprintf(1,"%s\n", line);
//	ft_strdel(&line);
	ft_putendl("2EME APPEL FICHIER 1");
	get_next_line(fd1, &line);
	dprintf(1,"%s\n", line);
	ft_strdel(&line);
//	ft_putendl("1ER APPEL FICHIER 3");
//	get_next_line(fd3, &line);
//	dprintf(1,"%s\n", line);
	ft_putendl("2EME APPEL FICHIER 2");
	get_next_line(fd2, &line);
	dprintf(1,"%s\n", line);
	ft_putendl("3EME APPEL FICHIER 1");
	get_next_line(fd1, &line);
	dprintf(1,"%s\n", line);
//	ft_putendl("2EME APPEL FICHIER 3");
//	get_next_line(fd3, &line);
//	dprintf(1,"%s\n", line);
	ft_putendl("3EME APPEL FICHIER 2");
	get_next_line(fd2, &line);
	dprintf(1,"%s\n", line);
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
