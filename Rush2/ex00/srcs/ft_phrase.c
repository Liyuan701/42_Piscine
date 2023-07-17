/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phrase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:45:50 by lifan             #+#    #+#             */
/*   Updated: 2023/07/16 19:41:33 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

int	ft_size(t_numbers **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_len_all(int size, t_numbers **tab, char *sep)
{
	int	i;
	int	len_all;

	len_all = 0;
	i = 0;
	if (size == 0)
		return (1);
	while (i < size)
	{
		len_all += ft_strlen(tab[i]->str);
		i++;
	}
	len_all += ft_strlen(sep) * (size - 1);
	len_all += 1;
	return (len_all);
}

char	*ft_phrase(t_numbers **tab)
{
	char	*phrase;
	int		len_all;
	int		i;
	int		size;

	i = 0;
	size = ft_size(tab);
	len_all = ft_len_all(size, tab, " ");
	phrase = malloc(sizeof(char) * len_all);
	if (!phrase)
		return (NULL);
	phrase[0] = 0;
	if (size == 0)
		return (phrase);
	while (i < size)
	{
		ft_strcat(phrase, tab[i]->str);
		if (i != size -1)
			ft_strcat(phrase, " ");
		i++;
	}
	phrase[ft_strlen(phrase)] = 0;
	return (phrase);
}
