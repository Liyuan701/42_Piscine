/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:39:21 by lifan             #+#    #+#             */
/*   Updated: 2023/07/13 15:40:19 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_issep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_preloop(char *str, char *charset)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] && ft_issep(str[i], charset))
			i++;
		if (str[i] && !ft_issep(str[i], charset))
		{
			while (str[i] && !ft_issep(str[i], charset))
				i++;
			n++;
		}
	}
	return (n);
}

char	*ft_copyloop(char *str, char *charset, int s)
{
	char	*innew;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[s + i] && !ft_issep(str[s + i], charset))
	{
		len++;
		i++;
	}
	innew = (char *)malloc(sizeof(char) * (len + 1));
	if (!innew)
		return (NULL);
	i = 0;
	while (i < len)
	{
		innew[i] = str[s + i];
		i++;
	}
	innew[i] = 0;
	return (innew);
}

char	**ft_split(char *str, char *charset)
{
	int		n;
	int		s;
	int		i;
	char	**new;

	i = 0;
	n = 0;
	new = (char **)malloc(sizeof(char *) * (ft_preloop(str, charset) + 1));
	while (str[i])
	{
		while (str[i] && ft_issep(str[i], charset))
			i++;
		if (str[i] && !ft_issep(str[i], charset))
		{
			s = i;
			while (str[i] && !ft_issep(str[i], charset))
				i++;
			new[n] = ft_copyloop(str, charset, s);
			n++;
		}
	}
	new[ft_preloop(str, charset)] = 0;
	return (new);
}

/*#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	int	i;
	char	*charset = ",./ '";
	char	**test;
	
	i = 0;
	if (ac == 2)
	{
		test = ft_split(av[1], charset);
		while (test[i])
		{
			printf("%s\n", test[i]);
			i++;
		}	
		return (0);
	}
}*/
