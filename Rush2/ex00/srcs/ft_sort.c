/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:57:54 by thdurand          #+#    #+#             */
/*   Updated: 2023/07/16 22:24:32 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

int	ask(t_numbers **tab, char *filename)
{
	int		i;
	t_dict	*dic;
	char	*dicto;

	dicto = dico(filename);
	if (dicto == NULL)
		return (0);
	dic = malloc(sizeof(t_dict));
	if (dic == NULL)
		return (0);
	if (ft_checkzero(tab))
		return (zerofound(tab, dicto, dic));
	i = 0;
	while (tab[i])
	{
		if (findandstock(dicto, tab[i++], dic) == 0)
		{
			free(dicto);
			free(dic);
			return (0);
		}
	}
	free(dicto);
	free(dic);
	return (1);
}

int	findandstock(char *dicto, t_numbers *nb, t_dict *dic)
{
	char	**final;
	int		i;

	i = 0;
	final = NULL;
	if (initchar(&final) == 0)
		return (finallyfree(final));
	if (tfind1(dicto, nb, dic, final))
		return (finallyfree(final));
	if (nb->three[1] == '1')
	{
		if (tfind2(dicto, nb, dic, final))
			return (finallyfree(final));
	}
	else
	{
		if (tfind4(dicto, nb, dic, final))
			return (finallyfree(final));
		if (tfind3(dicto, nb, dic, final))
			return (finallyfree(final));
	}
	if (tfind5(dicto, nb, dic, final))
		return (finallyfree(final));
	strcount(final, nb);
	return (1);
}

int	tfind1(char *dicto, t_numbers *nb, t_dict *dic, char **str)
{
	char	*str1;
	char	*str2;

	if (nb->three[0] != '0')
	{
		ft_find_c(dicto, nb->three[0], dic);
		if (dic->found == 0)
			return (1);
		str1 = ft_stock(dicto, dic);
		ft_find_str(dicto, "100", dic);
		if (dic->found == 0)
			return (1);
		str2 = ft_stock(dicto, dic);
		str[0] = mallocat(str1, str2);
	}
	else
	{
		str[0] = malnull();
	}
	return (0);
}

int	tfind2(char *dicto, t_numbers *nb, t_dict *dic, char **str)
{
	char	str2[3];

	str2[0] = nb->three[1];
	str2[1] = nb->three[2];
	str2[2] = '\0';
	ft_find_str(dicto, str2, dic);
	if (dic->found == 0)
		return (1);
	str[1] = ft_stock(dicto, dic);
	str[2] = malnull();
	return (0);
}
