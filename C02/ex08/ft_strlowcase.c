/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:08:27 by lifan             #+#    #+#             */
/*   Updated: 2023/07/03 12:10:44 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 'A' && str [i] <= 'Z' )
		{
			str [i] = str [i] + 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "SHOW ME ALL IN MIN";
	printf("%s", ft_strlowcase(str));
}*/
