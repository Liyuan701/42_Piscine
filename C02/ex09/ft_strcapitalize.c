/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:14:42 by lifan             #+#    #+#             */
/*   Updated: 2023/07/03 15:28:04 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_lowcase(str);
	while (str [i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z')
		{
			if (j == 1)
				str [i] = str [i] -32;
			j = 0;
		}
		else if (str [i] >= '0' && str [i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quaranrte-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}*/
