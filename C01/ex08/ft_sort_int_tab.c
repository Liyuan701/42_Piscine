/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:57:36 by lifan             #+#    #+#             */
/*   Updated: 2023/07/01 21:06:06 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	mid;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab [i] > tab [i + 1])
			{
				mid = tab [i];
				tab [i] = tab [i + 1];
				tab [i + 1] = mid;
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>
int 	main(void)
{
	int tab[5] = {1,7,4,5,3};
	int size = 5;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab [0], tab [1], tab [2], tab [3], tab [4]);
	return (0);
}*/
