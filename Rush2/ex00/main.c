/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdurand <thdurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:59:44 by lifan             #+#    #+#             */
/*   Updated: 2023/07/16 23:06:00 by thdurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/rush2.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char		*dict;
	char		*value;
	char		*phrase;
	t_numbers	**tab;

	ft_argument(ac, av, &dict, &value);
	if (!ft_check_value(value))
		ft_putstr("Error\n");
	else
	{
		value = ft_killzero(value, 0, 0);
		tab = ft_numbers(value);
		if (ask(tab, dict) == 0)
		{
			ft_putstr("Dict Error\n");
			ft_free(tab, NULL, value);
			return (0);
		}
		phrase = ft_phrase(tab);
		ft_putstr(phrase);
		ft_putchar('\n');
		ft_free(tab, phrase, value);
	}
	return (0);
}
