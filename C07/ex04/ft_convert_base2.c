/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:03:29 by lifan             #+#    #+#             */
/*   Updated: 2023/07/14 12:14:34 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_strlen(char *str);
void	ft_inverse(char *str, int len);
char	*ft_strdup(char *src);
char	*ft_itoa_base(int n, char *base_to);

int	ft_isbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if ((base[0] == '\0') || (base[1] == '\0'))
		return (0);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] > 126
			|| base[i] == '+' || base [i] == '-' || base [i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
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
	if (ft_isbase(base) == 0)
		return (0);
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

int	main(void)
{
	printf("42:%i\n", ft_atoi_base("--2a", "0123456789abcdef"));
	printf("-2a:%i\n", ft_atoi_base("-42", "012345678999"));
}*/
