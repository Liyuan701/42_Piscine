/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:25:36 by lifan             #+#    #+#             */
/*   Updated: 2023/07/05 20:45:58 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isbase(char *base, int *ptr_len)
{
	int	i;
	int	j;
	int	r;

	r = 1;
	j = 0;
	i = 0;
	if ((base[0] == '\0') || (base[1] == '\0'))
		return (0);
	while (base[i])
	{
		if (base[i] == base [j] && i != j)
		{
			return (0);
			j++;
		}
		if (base[i] <= 32 || base[i] == 127
			|| base[i] == '+' || base [i] == '-')
			return (0);
		i++;
		*ptr_len = i;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		verify;
	int		len;

	nb = nbr;
	len = 0;
	verify = ft_isbase(base, &len);
	if (verify == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}

/*#include <stdio.h>
int	main()
{
	ft_putnbr_base(42, "abcdef");
	printf("\n");
	ft_putnbr_base(-42, "0123456789");
	printf("\n");
	ft_putnbr_base(344, "liyuan");
	printf("\n");
	ft_putnbr_base(42, "01");
}*/

/*void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}*/
