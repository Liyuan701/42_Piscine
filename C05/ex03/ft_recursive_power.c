/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:49:13 by lifan             #+#    #+#             */
/*   Updated: 2023/07/06 14:27:23 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_recursive_power(3, 4));
	printf("%i\n", ft_recursive_power(7, 0));
	printf("%i", ft_recursive_power(-3, 3));
}*/
