/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:44:39 by lifan             #+#    #+#             */
/*   Updated: 2023/07/16 22:55:55 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (!src[len])
		return (0);
	while (src[len])
		len++;
	len += 1;
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (0);
	while (src[i])
	{
		str[i] = src [i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
