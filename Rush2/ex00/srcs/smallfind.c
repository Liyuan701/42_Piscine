/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallfind.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:47:35 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 21:21:27 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

int	tfind3(char *dicto, t_numbers *nb, t_dict *dic, char **str)
{
	if (nb->three[2] != '0')
	{
		ft_find_c(dicto, nb->three[2], dic);
		if (dic->found == 0)
			return (1);
		str[2] = ft_stock(dicto, dic);
	}
	else
		str[2] = malnull();
	return (0);
}

int	tfind4(char *dicto, t_numbers *nb, t_dict *dic, char **str)
{
	char	str2[3];
	int		i;

	i = 0;
	str2[0] = nb->three[1];
	str2[1] = '0';
	str2[2] = '\0';
	if (nb->three[1] != '0')
	{
		ft_find_str(dicto, str2, dic);
		if (dic->found == 0)
			return (1);
		str[1] = ft_stock(dicto, dic);
	}
	else
		str[1] = malnull();
	return (0);
}

int	tfind5(char *dicto, t_numbers *nb, t_dict *dic, char **str)
{
	char	*str2;
	int		i;

	i = 0;
	str2 = malloc((2 + nb->pos * 3) * sizeof(char));
	str2[i++] = '1';
	while (i < nb->pos * 3 + 1)
		str2[i++] = '0';
	str2[i] = '\0';
	if (nb->pos != 0 && ft_check(nb))
	{
		ft_find_str(dicto, str2, dic);
		if (dic->found == 0)
		{
			free(str2);
			return (1);
		}
		str[3] = ft_stock(dicto, dic);
	}
	else
		str[3] = malnull();
	free(str2);
	return (0);
}

int	ft_check(t_numbers *nb)
{
	if (nb->three[0] == '0' && nb->three[1] == '0')
	{
		if (nb->three[2] == '0')
			return (0);
	}
	return (1);
}
