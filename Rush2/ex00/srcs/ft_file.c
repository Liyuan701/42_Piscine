/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:21:03 by thdurand          #+#    #+#             */
/*   Updated: 2023/07/16 18:43:51 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

int	ft_file(char *dict)
{
	int		fd;
	int		i;
	int		a;
	char	c[1];

	i = 0;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (0);
	a = 1;
	while (a == 1)
	{
		a = read(fd, c, 1);
		i++;
	}
	if (a == -1)
		return (0);
	close(fd);
	return (i);
}
