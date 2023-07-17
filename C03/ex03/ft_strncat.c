/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:06:22 by lifan             #+#    #+#             */
/*   Updated: 2023/07/04 14:18:04 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest [i] != '\0')
	{
		i++;
	}
	while (src [j] != '\0' && j < nb)
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
	printf("%s\n",ft_strncat(dest,src,5));
	return (0);
}*/
