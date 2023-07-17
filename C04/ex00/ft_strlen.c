/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:21:41 by lifan             #+#    #+#             */
/*   Updated: 2023/07/05 20:39:06 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*s)
		s++;
	return (s - str);
}
/*#include <stdio.h>
int	main()
{
	char *str = "it's just a test";
	printf("%i",ft_strlen(str));
	return (0);
}*/
