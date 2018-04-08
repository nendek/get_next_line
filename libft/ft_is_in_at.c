/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 14:31:44 by pnardozi          #+#    #+#             */
/*   Updated: 2017/12/15 14:34:45 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_is_in_at(char *str, char c, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
