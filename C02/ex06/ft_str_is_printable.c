/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:22:03 by lifan             #+#    #+#             */
/*   Updated: 2023/07/03 16:55:16 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str [i] == '\0')
		return (1);
	while (str [i] != '\0')
	{
		if (str [i] >= 32 && str [i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_printable("abcdedfAA!! !!"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("\n"));
}*/
