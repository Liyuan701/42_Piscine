/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:41:37 by jla-chon          #+#    #+#             */
/*   Updated: 2023/07/16 18:40:44 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush2.h"

char	*dico(char *filename)
{
	char	*dico;
	int		size;
	int		fd;

	size = ft_file(filename);
	if (size <= 0)
		return (NULL);
	dico = malloc(sizeof(char) * (size + 1));
	if (dico == NULL)
		return (NULL);
	fd = open(filename, O_RDONLY);
	read(fd, dico, size);
	dico[size] = '\0';
	return (dico);
}
