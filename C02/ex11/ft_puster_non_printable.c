/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puster_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:55:44 by lifan             #+#    #+#             */
/*   Updated: 2023/07/03 20:33:51 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if ((str [i] >= 0 && str [i] < 32) || str [i] == 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str [i] / 16]);
			ft_putchar("0123456789abcdef"[str [i] % 16]);
		}
		else if (str [i] >= 32 && str [i] <= 126)
			ft_putchar(str [i]);
		i++;
	}
}
/*#include <stdio.h>

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu va bien?");
	return (0);
}*/
