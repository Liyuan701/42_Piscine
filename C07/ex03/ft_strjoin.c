/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:22:39 by lifan             #+#    #+#             */
/*   Updated: 2023/07/12 12:32:14 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len_all(int size, char **strs, char *sep)
{
	int	i;
	int	len_all;

	len_all = 0;
	i = 0;
	if (size == 0)
		return (1);
	while (i < size)
	{
		len_all += ft_len(strs[i]);
		i++;
	}
	len_all += ft_len(sep) * (size - 1);
	len_all += 1;
	return (len_all);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest [i])
	{
		i++;
	}
	while (src [j])
	{
		dest [i + j] = src [j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		len_all;
	int		i;

	i = 0;
	len_all = ft_len_all(size, strs, sep);
	new = malloc(sizeof(char) * len_all);
	if (!new)
		return (NULL);
	new[0] = 0;
	if (size == 0)
		return (new);
	while (i < size)
	{
		ft_strcat(new, strs[i]);
		if (i != size -1)
			ft_strcat(new, sep);
		i++;
	}
	new[ft_len(new)] = 0;
	return (new);
}

/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	*strs[] = {"hello", "it", "works"};
	char	*sep = " / ";
	int	size = 3;
	printf("%s\n", ft_strjoin(size, strs, sep));
}*/
