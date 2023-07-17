/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:47:05 by lifan             #+#    #+#             */
/*   Updated: 2023/07/11 15:13:39 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	n;
	long	mid;

	n = nb;
	mid = n / 2;
	if (n == 1)
		return (1);
	if (n >= 2)
	{
		while (mid * mid <= n && mid < 46341)
		{
			if (mid * mid == n)
				return (mid);
			mid++;
		}
		while (mid * mid >= n && mid < 46341) 
		{
			if (mid * mid == n)
				return (mid);
			mid--;
		}
		return (0);
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%i\n",ft_sqrt(2147395600));
	printf("%i\n",ft_sqrt(6));
	printf("%i\n",ft_sqrt(3));
}
