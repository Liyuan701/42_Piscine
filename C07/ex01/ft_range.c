/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:23:37 by lifan             #+#    #+#             */
/*   Updated: 2023/07/11 18:19:23 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (0);
	else
	{
		range = malloc(sizeof(int) * len);
		if (range == NULL)
			return (0);
		while (i < len)
		{
			range[i] = min + i;
			i++;
		}
	}
	return (range);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	int	*range;
	int	i;

	i = 0;
	range = ft_range(5, 10);
	while (i < 5)
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
