/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:50:11 by lifan             #+#    #+#             */
/*   Updated: 2023/07/06 14:16:50 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
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
	printf("%i\n", ft_iterative_power(3, 4));
	printf("%i\n", ft_iterative_power(7, 0));
	printf("%i", ft_iterative_power(-3, 3));
}*/
