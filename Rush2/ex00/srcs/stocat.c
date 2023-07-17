/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stocat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:46:17 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 21:29:07 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

void	stocat(t_numbers *nb, char **final)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (final[j][i])
			nb->str[count++] = final[j][i++];
		if (j < 3)
			if (final[j + 1][0] && count != 0)
				nb->str[count++] = ' ';
		j++;
	}
	j = 0;
	while (j < 4)
	{
		free(final[j++]);
	}
	free(final);
	nb->str[count] = '\0';
}
