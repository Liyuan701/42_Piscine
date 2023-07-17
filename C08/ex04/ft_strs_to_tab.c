/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:07:15 by lifan             #+#    #+#             */
/*   Updated: 2023/07/14 11:15:05 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src [i];
		i++;
	}
	str[i] = 0;
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{	
	int						i;
	struct s_stock_str		*out;

	i = 0;
	if (ac < 1)
		ac = 0;
	out = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!out)
		return (NULL);
	while (i < ac)
	{
		out[i].size = ft_strlen(av[i]);
		out[i].str = av[i];
		out[i].copy = ft_strdup(av[i]);
		i++;
	}
	out[i].str = 0;
	return (out);
}
