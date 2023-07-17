/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:05:40 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 20:31:47 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

int	initchar(char ***final)
{
	int	i;

	i = 0;
	*final = malloc(sizeof(char *) * 4);
	if (*final == NULL)
		return (0);
	while (i < 4)
		(*final)[i++] = NULL;
	return (1);
}

char	*malnull(void)
{
	char	*str;

	str = malloc(1);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	return (str);
}
