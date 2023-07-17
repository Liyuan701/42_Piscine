/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:16:15 by thdurand          #+#    #+#             */
/*   Updated: 2023/07/16 19:20:05 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

int	ft_strc(char *str, char to_find)
{
	int	i;
	int	k;

	i = 0;
	while (str[i])
	{
		if (str[i++] == to_find)
		{
			k = i;
			while (str[k] == ' ' || str[k] == ':')
			{
				if (str[k] == ':')
					return (k + 1);
				k++;
			}
		}
	}
	return (-1);
}
