/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_vues.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stouitou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:55:38 by stouitou          #+#    #+#             */
/*   Updated: 2023/07/09 22:01:49 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// up to down
int	ft_check_v1(int map[6][6], int b)
{
	int	i;
	int	count;
	int	max;

	i = 1;
	count = 1;
	max = map[i][b];
	while (i <= 4)
	{
		if (max < map[i + 1][b])
		{
			count += 1;
			max = map[i + 1][b];
		}
		i++;
	}
	if (count == map[0][b])
		return (1);
	else
		return (0);
}

// down to up
int	ft_check_v2(int map[6][6], int b)
{
	int	i;
	int	count;
	int	max;

	i = 4;
	count = 1;
	max = map[i][b];
	while (i >= 1)
	{
		if (max < map[i - 1][b])
		{
			count += 1;
			max = map[i - 1][b];
		}
		i--;
	}
	if (count == map[5][b])
		return (1);
	else
		return (0);
}

// check de droite a gauche
int	ft_check_h2(int map[6])
{
	int	i;
	int	count;
	int	max;

	i = 4;
	count = 1;
	max = map[i];
	while (i >= 1)
	{
		if (max < map[i - 1])
		{
			count += 1;
			max = map[i - 1];
		}
		i--;
	}
	if (count == map[5])
		return (1);
	else
		return (0);
}

// check de gauche a droite
int	ft_check_h1(int map[6])
{
	int	i;
	int	count;
	int	max;

	i = 1;
	count = 1;
	max = map[i];
	while (i <= 4)
	{
		if (max < map[i + 1])
		{
			count += 1;
			max = map[i + 1];
		}
		i++;
	}
	if (count == map[0])
		return (1);
	else
		return (0);
}
