/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:07:37 by lifan             #+#    #+#             */
/*   Updated: 2023/07/04 17:28:13 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len_to_find(char *to_find)
{
	int	i;

	i = 0;
	while (to_find [i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	len = ft_len_to_find(to_find);
	if (len == 0)
		return (str);
	while (str [i] != '\0')
	{
		j = 0;
		while (to_find [j] != '\0' && str [i + j] == to_find [j])
		{
			j++;
			if (j == len)
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h> 
int	main(void)
{
	char str[] = "There is a little cat here";
	char to_find[] = "cat";
	printf("%s\n",ft_strstr(str,to_find));
	return (0);
}*/
