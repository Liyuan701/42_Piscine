/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:22:53 by lifan             #+#    #+#             */
/*   Updated: 2023/07/01 13:02:09 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_split(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	q;
	int	h;

	q = 0;
	while (q <= 98)
	{
		h = q + 1;
		while (h <= 99)
		{
			ft_split(q);
			write(1, " ", 1);
			ft_split(h);
			if (! (q == 98 && h == 99))
				write(1, ", ", 2);
			h++;
		}
		q++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}	*/
