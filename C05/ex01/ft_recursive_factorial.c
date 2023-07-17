/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:51:07 by lifan             #+#    #+#             */
/*   Updated: 2023/07/06 13:49:13 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		result *= nb * ft_recursive_factorial(nb - 1);
	return (result);
}

/*#include <stdio.h>
int	main()
{
	printf("%i",ft_recursive_factorial(1));
}*/
