/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:55:05 by maemaldo          #+#    #+#             */
/*   Updated: 2023/07/09 21:27:27 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_c(int map[6][6], int a, int b);
int		ft_check_h(int map[6][6], int a);
int		ft_check_v(int map[6][6], int a);
int		ft_valide_all(int map[6][6]);
void	ft_copy_2d(int dest[6][6], int src[6][6]);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_check_fin(int tab[6][6])
{
	int	i;
	int	is_perfect;

	i = 1;
	is_perfect = 1;
	while (i < 5)
	{
		if (!ft_check_v(tab, i))
			is_perfect = 0;
		i++;
	}
	return (is_perfect);
}

void	ft_gen(int res[6][6], int tab[6][6], int cur_i, int cur_l)
{
	int	i;

	if (cur_i == 4 && (ft_check_h(tab, cur_l) == 1 && cur_l < 5))
	{
		ft_gen(res, tab, 1, cur_l + 1);
		if (cur_l == 4)
		{
			if (ft_check_fin(tab) && ft_valide_all(tab))
				ft_copy_2d(res, tab);
		}
		return ;
	}
	else
	{
		i = cur_i;
		while (i < 5)
		{
			ft_swap(&tab[cur_l][cur_i], &tab[cur_l][i]);
			ft_gen(res, tab, cur_i + 1, cur_l);
			ft_swap(&tab[cur_l][cur_i], &tab[cur_l][i]);
			i++;
		}
	}
}
