/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:37:06 by lifan             #+#    #+#             */
/*   Updated: 2023/07/01 22:05:43 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "hello I run well";
	char dest[] = "maybe";
	printf("%s", ft_strcpy(dest, src));
	return (0);
}*/
