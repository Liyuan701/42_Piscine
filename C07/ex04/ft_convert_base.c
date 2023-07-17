/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:00:06 by lifan             #+#    #+#             */
/*   Updated: 2023/07/16 14:28:30 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isbase(char *base);
int	ft_nbbase(char str, char *base);
int	ft_delete(char *str, int *ptr_i);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_inverse(char *str, int len)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - i - 1] = tmp;
		i++;
	}
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (0);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_itoa_base(int n, char *base_to)
{
	int			i;
	char		new[33];
	char		*out;
	long int	nb;

	i = 0;
	nb = (long int)n;
	if (nb < 0)
		nb = -nb;
	while (nb)
	{
		new[i++] = base_to[nb % ft_strlen(base_to)];
		nb = nb / ft_strlen(base_to);
	}
	if (n < 0)
		new[i++] = '-';
	new[i] = 0;
	ft_inverse(new, ft_strlen(new));
	out = ft_strdup(new);
	return (out);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*out;
	int		n;
	int		len;

	len = 0;
	if (!(ft_isbase(base_from)) || !(ft_isbase(base_to)))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	if (n == 0)
	{
		out = malloc(sizeof(char) * 2);
		out[0] = base_to[0];
		out[1] = '\0';
		return (out);
	}	
	len = ft_strlen(ft_itoa_base(n, base_to));
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (0);
	out = ft_itoa_base(n, base_to);
	return (out);
}

/*#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "012345678999", "0123456789abcdef"));
}*/
