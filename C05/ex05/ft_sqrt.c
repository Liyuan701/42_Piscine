/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:47:05 by lifan             #+#    #+#             */
/*   Updated: 2023/07/11 17:21:46 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recu(int nb, int a)
{
	if (nb > 2147395600)
		return (0);
	if (a * a == nb)
		return (a);
	if (a * a < nb)
		return (ft_recu(nb, a + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_recu(nb, 0));
}

/*#include <stdio.h>
int	main(void)
{
	printf("%i\n",ft_sqrt(2147395600));
	printf("%i\n",ft_sqrt(6));
	printf("%i\n",ft_sqrt(3));
}*/
