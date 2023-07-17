/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 20:43:39 by lifan             #+#    #+#             */
/*   Updated: 2023/07/01 13:50:06 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_max(int n)
{
	int	s;

	s = 1;
	while (n > 0)
	{
		s = s * 10;
		n --;
	}
	return (s);
}

int	g_c;
int	g_a;
int	g_m;
int	g_max;

void	ft_print_combn(int n)
{
	g_m = 0;
	g_a = 0;
	g_max = ft_max(n) - 1;
	while (g_a <= g_max)
	{
		g_c = g_max +1;
		g_m = g_a;
		while (g_c > 10)
		{
			g_c = g_c / 10;
			ft_putchar(g_m / g_c + 48);
			g_m = g_m - (g_m / g_c) * g_c;
		}
		ft_putchar(g_a % g_c + 48);
		if (g_a != g_max)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	g_a++;
	}
}

/*int	main(void)
{	
	int	n;

	n = 4;
	ft_print_combn(n);
}*/
