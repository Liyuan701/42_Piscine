/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:27:17 by lifan             #+#    #+#             */
/*   Updated: 2023/07/05 20:12:31 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isbase(char *base)
{
	int	i;
	int	j;

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
			|| base[i] == '+' || base [i] == '-' || base [i] == ' ')
			return (0);
		i++;
	}
	return (i);
}

int	ft_nbbase(char str, char *base)
{
	int	n;

	n = 0;
	while (base[n])
	{
		if (str == base[n])
			return (n);
		n++;
	}
	return (-1);
}

int	ft_delete(char *str, int *ptr_i)
{
	int	j;
	int	sign;

	j = 0;
	sign = 1;
	while (str[j] == 32 || (str[j] >= 9 && str[j] <= 13))
	{
		j++;
	}	
	while ((str [j] == '+') || (str [j] == '-'))
	{
		if (str [j] == '-')
			sign *= -1;
		j++;
	}
	*ptr_i = j;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	len;
	int	nbr;
	int	nb;
	int	i;

	i = 0;
	nbr = 0;
	len = ft_isbase(base);
	if (*str == '\0')
		return (0);
	sign = ft_delete(str, &i);
	nb = ft_nbbase(str[i], base);
	while (nb != -1)
	{
		nbr = (nbr * len) + nb;
		i++;
		nb = ft_nbbase(str[i], base);
	}
	return (sign * nbr);
}
/*#include <stdio.h>
int	main()
{
	printf("%i\n",ft_atoi_base(" ---+42", "0123456789"));
	printf("%i\n",ft_atoi_base("   --+10nny", "01fany"));
	printf("%i",ft_atoi_base("  ---+--abbc", "abcdefghijk"));
}*/

/*#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}*/
