/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdurand <thdurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:38:55 by lifan             #+#    #+#             */
/*   Updated: 2023/07/16 23:04:14 by thdurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

void	ft_getthree1(t_numbers *nbr, char *value, int last_nmb)
{
	nbr->three[0] = '0';
	if (last_nmb == 1)
	{
		nbr->three[1] = '0';
		nbr->three[2] = value[0];
	}
	else
	{
		nbr->three[1] = value[0];
		nbr->three[2] = value[1];
	}
	nbr->three[3] = '\0';
}

void	ft_getthree2(t_numbers *nbr, char *value, int last_nmb, int pair_nmb)
{
	int	i;
	int	j;

	i = 0;
	if (last_nmb == 0)
		j = 3 * (pair_nmb - 1 - nbr->pos);
	if (last_nmb != 0)
		j = last_nmb + 3 * (pair_nmb - 2 - nbr->pos);
	while (i < 3)
	{
		nbr->three[i] = value[j];
		i++;
		j++;
	}
	nbr->three[3] = '\0';
}

int	ft_creat(t_numbers **nbstrs, char *value, int last_nmb, int pair_nmb)
{
	int	i;
	int	pos;

	i = 0;
	pos = pair_nmb - 1;
	while (i < pair_nmb)
	{
		nbstrs[i] = malloc(sizeof(t_numbers));
		if (nbstrs[i] == NULL)
			return (0);
		(nbstrs[i])->pos = pos;
		if (pos == pair_nmb - 1 && last_nmb != 0)
			ft_getthree1(nbstrs[i], value, last_nmb);
		else
			ft_getthree2(nbstrs[i], value, last_nmb, pair_nmb);
		i++;
		pos--;
	}
	nbstrs[i] = 0;
	return (1);
}

t_numbers	**ft_numbers(char *value)
{
	int			len_all;
	int			last_nmb;
	int			pair_nmb;
	t_numbers	**nbstrs;

	len_all = ft_strlen(value);
	pair_nmb = (len_all / 3);
	last_nmb = (len_all % 3);
	if (last_nmb != 0)
		pair_nmb += 1;
	nbstrs = malloc(sizeof(t_numbers *) * (pair_nmb + 1));
	if (!nbstrs)
		return (NULL);
	ft_creat(nbstrs, value, last_nmb, pair_nmb);
	return (nbstrs);
}

char	*ft_killzero(char *value, int i, int j)
{
	char	*sanszero;
	int		len;

	len = 0;
	while (value[i] && value[i] == '0')
		i++;
	while (value[len])
		len++;
	if (i == len)
		value[1] = '\0';
	else
	{
		sanszero = malloc(sizeof(char) * (len + 1));
		while (value[i + j])
		{
			sanszero[j] = value[i + j];
			j++;
		}
		sanszero[j] = '\0';
		free(value);
		return (sanszero);
	}
	return (value);
}
