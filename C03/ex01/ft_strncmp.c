/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:04:12 by lifan             #+#    #+#             */
/*   Updated: 2023/07/04 11:34:13 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1 [i] != '\0' || s2 [i] != '\0'))
	{
		if (s1 [i] > s2 [i])
			return (1);
		if (s1 [i] < s2 [i])
			return (-1);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h> 
int	main(void)
{
	printf("%d\n",ft_strncmp("I AM THE STRING S1","I AM THE STRING S2",2));
	printf("%d\n",ft_strncmp("not same 1","not same 2",10));
	printf("%d",ft_strncmp("4","2",1));
	return (0);
}*/
