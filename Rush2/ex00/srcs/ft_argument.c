/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdurand <thdurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:34:40 by lifan             #+#    #+#             */
/*   Updated: 2023/07/16 22:57:45 by thdurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../include/rush2.h"

void	ft_argument(int ac, char **av, char **dict, char **value)
{
	if (ac == 3)
	{
		*dict = av[1];
		*value = ft_strdup(av[2]);
	}
	else if (ac == 2)
	{
		*dict = "./dicts/numbers.dict";
		*value = ft_strdup(av[1]);
	}
	else
	{
		*dict = NULL;
		*value = NULL;
	}
}
