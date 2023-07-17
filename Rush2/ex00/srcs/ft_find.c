/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:03:19 by thdurand          #+#    #+#             */
/*   Updated: 2023/07/16 18:56:12 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

void	ft_find_str(char *dicto, char *nb, t_dict *dic)
{
	int	i;

	dic->index = ft_strstr(dicto, nb);
	dic->size = 0;
	if (dic->index == -1)
	{	
		dic->found = 0;
		return ;
	}
	i = dic->index;
	while (dicto[i] != '\n')
	{
		dic->size += 1;
		i++;
	}
	dic->found = 1;
	if (!dicto[i])
		dic->found = 0;
}

void	ft_find_c(char *dicto, char c, t_dict *dic)
{
	int	i;

	dic->index = ft_strc(dicto, c);
	dic->size = 0;
	if (dic->index == -1)
	{	
		dic->found = 0;
		return ;
	}
	i = dic->index;
	while (dicto[i] != '\n')
	{
		dic->size += 1;
		i++;
	}
	dic->found = 1;
	if (!dicto[i])
		dic->found = 0;
}
