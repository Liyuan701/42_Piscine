/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:23:17 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 20:17:20 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

char	*ft_stock(char *dicto, t_dict *dic)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (dic->size + 1));
	if (str == NULL)
		return (NULL);
	while (i < dic->size)
	{
		str[i] = dicto[dic->index + i];
		i++;
	}
	str[i] = '\0';
	return (removespace(str, 0, 0, 0));
}

char	*removespace(char *word, int i, int count, int j)
{
	int		size;
	char	*str;

	size = ft_strlen(word);
	while (word[i] == ' ')
	{
		count++;
		i++;
	}
	j = i;
	i = 0;
	while (word[size - i - 1] == ' ')
	{
		count++;
		i++;
	}
	i = -1;
	str = malloc(size - count + 1);
	while (++i < size - count)
		str[i] = word[j + i];
	str[i] = '\0';
	free(word);
	return (str);
}
