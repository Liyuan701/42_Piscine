/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:43:29 by lifan             #+#    #+#             */
/*   Updated: 2023/07/01 21:07:57 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	mid;

	i = 0;
	while (i < (size / 2))
	{
		mid = tab [i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = mid;
		i++;
	}
}

/*
#include <stdio.h>

int     main(void)
{
	int tab[5] = {1,7,4,5,3};
	int size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab [0], tab [1], tab [2], tab [3], tab [4]);
	return (0);
}*/
