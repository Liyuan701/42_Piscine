/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stouitou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:57:26 by stouitou          #+#    #+#             */
/*   Updated: 2023/07/09 22:00:37 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_v1(int map[6][6], int b);
int	ft_check_v2(int map[6][6], int b);
int	ft_check_h2(int map[6]);
int	ft_check_h1(int map[6]);

/*check croix*/
int	ft_check_c(int map[6][6], int a, int b)
{
	int	i;

	i = 1;
	while (i >= 1 && i <= 4)
	{
		if (map[a][b] == map [i][b] && i != a)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*check horizontal*/
int	ft_check_h(int map[6][6], int a)
{
	if (ft_check_h1(map[a]) != 1)
		return (0);
	if (ft_check_h2(map[a]) != 1)
		return (0);
	return (1);
}

/*check vertical*/
int	ft_check_v(int map[6][6], int a)
{
	if (ft_check_v1(map, a) != 1)
		return (0);
	if (ft_check_v2(map, a) != 1)
		return (0);
	return (1);
}

int	ft_valide_all(int map[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{		
			if (ft_check_h1(map[i]) != 1)
				return (0);
			if (ft_check_h2(map[i]) != 1)
				return (0);
			if (ft_check_v1(map, j) != 1)
				return (0);
			if (ft_check_v2(map, j) != 1)
				return (0);
			if (ft_check_c(map, i, j) != 1)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
