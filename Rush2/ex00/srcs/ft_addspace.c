/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:06:18 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 21:14:26 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

char	*ft_addspace(char *str)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i])
		i++;
	res = malloc((i + 2) * sizeof(char));
	i = -1;
	while (str[++i])
		res[i] = str[i];
	res[i++] = ' ';
	res[i] = '\0';
	free(str);
	return (res);
}
