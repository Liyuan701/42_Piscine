/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:55:35 by lifan             #+#    #+#             */
/*   Updated: 2023/07/16 17:49:22 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int	t_bool;

# define TRUE 1

# define FALSE 0

# define EVEN(nbr) ((nbr % 2) == 0 ? 1 : 0)

# define EVEN_MSG "I have an even number of arguments."

# define ODD_MSG "I have an odd number of arguments."

# define SUCCESS 0

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
