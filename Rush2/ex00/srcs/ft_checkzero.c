/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:54:43 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 22:33:25 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

int	ft_checkzero(t_numbers **nb)
{
	int	i;

	i = 0;
	while (nb[i])
		i++;
	if (i == 1)
	{
		if (nb[0]->three[0] == '0' && nb[0]->three[1] == '0')
		{
			if (nb[0]->three[2] == '0')
			{
				return (1);
			}
		}
	}
	return (0);
}

int	zerofound(t_numbers **nb, char *dicto, t_dict *dic)
{
	ft_find_c(dicto, nb[0]->three[0], dic);
	if (dic->found == 0)
	{
		free(dicto);
		free(dic);
		return (0);
	}
	nb[0]->str = ft_stock(dicto, dic);
	free(dicto);
	free(dic);
	return (1);
}
