/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:09:04 by lifan             #+#    #+#             */
/*   Updated: 2023/07/04 19:09:39 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *string)
{
	unsigned int	c;

	c = 0;
	while (string [c])
		c++;
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	dlen = ft_len(dest);
	slen = ft_len(src);
	if (size == 0 || size < dlen)
		return (slen + size);
	while (src [i] && i + dlen + 1 < size)
	{
		dest [dlen + i] = src [i];
		i++;
	}
	dest [dlen + i] = '\0';
	return (dlen + slen);
}
/*#include <stdio.h>
#include <string.h> 
int	main(void)
{
	char dest[] = "the first one and ";
	char src[] = "the second one";
	printf("%i\n",ft_strlcat(dest,src,20));
	printf("%s\n",dest);
	return (0);
}*/
