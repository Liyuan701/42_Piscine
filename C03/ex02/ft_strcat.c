/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:05:21 by lifan             #+#    #+#             */
/*   Updated: 2023/07/12 11:24:41 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest [i] != '\0')
	{
		i++;
	}
	while (src [j] != '\0')
	{
		dest [i + j] = src [j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h> 
int	main(void)
{
	char dest[] = "the first and ";
	char src[] = "the second";
	printf("%s\n",ft_strcat(dest,src));
	return (0);
}*/
