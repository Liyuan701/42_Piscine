/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:49:20 by lifan             #+#    #+#             */
/*   Updated: 2023/07/11 17:37:38 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*new;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	if (len <= 0)
	{	
		*range = NULL;
		return (0);
	}
	new = (int *)malloc(sizeof(int) * len);
	if (!new)
		return (-1);
	else
	{
		while (i < len)
		{
			new[i] = min + i;
			i++;
		}
	}
	*range = new;
	return (i);
}
