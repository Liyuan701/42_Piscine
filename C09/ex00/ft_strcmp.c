/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:01:23 by lifan             #+#    #+#             */
/*   Updated: 2023/07/04 11:36:12 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1 [i] == s2 [i] && (s1 [i] != '\0' || s2 [i] != '\0'))
		i++;
	return (s1 [i] - s2 [i]);
}

/*#include <stdio.h>
#include <string.h> 
int	main(void)
{
	printf("%d\n",ft_strcmp("I AM THE STRING S1","I AM THE STRING S2"));
	printf("%d\n",ft_strcmp("the same","the same"));
	printf("%d",ft_strcmp("4","2"));
	return (0);
}*/
