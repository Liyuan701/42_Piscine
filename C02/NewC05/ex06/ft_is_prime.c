/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:46:10 by lifan             #+#    #+#             */
/*   Updated: 2023/07/10 21:06:12 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	n;
	int	i;

	n = nb;
	i = 2;
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	if (n > 2)
	{
		while (i < n / i)
		{
			if (n % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_is_prime(3));
	printf("%i\n", ft_is_prime(8));
	printf("%i\n", ft_is_prime(22));
}*/
