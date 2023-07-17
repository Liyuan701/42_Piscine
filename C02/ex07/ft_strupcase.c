/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:28:51 by lifan             #+#    #+#             */
/*   Updated: 2023/07/03 12:12:29 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z' )
		{
			str [i] = str [i] - 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "show me all in Cap";
	printf("%s", ft_strupcase(str));
}*/
