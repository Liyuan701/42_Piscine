/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:29:06 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 19:53:56 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

char	*mallocat(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*final;
	int		k;

	k = -1;
	i = 0;
	j = 0;
	while (str1[i])
		i++;
	while (str2[j])
		j++;
	final = malloc(sizeof(char) * (i + j + 2));
	while (++k < i)
		final[k] = str1[k];
	j = i + j + 1;
	i = 0;
	final[k++] = ' ';
	while (k < j)
		final[k++] = str2[i++];
	final[k] = '\0';
	free(str1);
	free(str2);
	return (final);
}
