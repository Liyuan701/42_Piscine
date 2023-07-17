/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:41:09 by lifan             #+#    #+#             */
/*   Updated: 2023/07/16 18:10:47 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

int	ft_check_value(char *value)
{
	int	i;

	i = 0;
	if (!value[i])
		return (0);
	while (value[i])
	{
		if (value[i] < '0' || value[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
