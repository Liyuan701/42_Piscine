/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:30:20 by lifan             #+#    #+#             */
/*   Updated: 2023/07/03 20:29:03 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_srclen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src [i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	m;
	unsigned int	j;

	j = 0;
	m = ft_srclen(src);
	if (size != 0)
	{
		while (src[j] != '\0' && j < size -1)
		{
			dest [j] = src [j];
			j++;
		}
		dest [j] = '\0';
	}
	return (m);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[] = "12345678";
	char src[] = "abcdefgh";
	printf("%d - %s", ft_strlcpy(dest, src, 5),dest);
}*/
