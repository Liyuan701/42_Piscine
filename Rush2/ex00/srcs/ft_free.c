/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdurand <thdurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:29:20 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 23:07:39 by thdurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

void	ft_free(t_numbers **tab, char *phrase, char *value)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]->str);
		free(tab[i++]);
	}
	free(value);
	free(tab);
	free(phrase);
}

int	finallyfree(char **final)
{
	int	j;

	j = 0;
	while (j < 4)
		free(final[j++]);
	free(final);
	return (0);
}
