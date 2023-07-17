/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcount.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:46:40 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 20:32:25 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

void	strcount(char **final, t_numbers *nb)
{
	int	i;
	int	count;
	int	j;

	j = 0;
	count = 0;
	while (j < 4)
	{
		i = 0;
		while (final[j][i++])
			count++;
		j++;
	}
	nb->str = malloc((count + 5) * sizeof(char));
	stocat(nb, final);
}
