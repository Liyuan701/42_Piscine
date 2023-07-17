/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:44:39 by lifan             #+#    #+#             */
/*   Updated: 2023/07/13 19:37:13 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src [i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	main()
{
	char src[] = "Hello it's a test";
	printf("%s\n", ft_strdup(src));
}*/
