/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:22:25 by lifan             #+#    #+#             */
/*   Updated: 2023/07/05 20:46:33 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	sign = 1;
	nbr = 0;
	if (*str == '\0')
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}	
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '+')
			sign *= 1;
		if (*str == '-')
			sign *= -1;
		str ++;
	}
	while ((*str != '\0') && (*str >= '0') && (*str <= '9'))
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (sign * nbr);
}
/*#include <stdio.h>
int	main()
{
	char *str = "   ---+--+1234ab567";
	printf("%i",ft_atoi(str));
}*/

/*#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));
}*/
