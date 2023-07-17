/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemaldo <maemaldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:53:39 by maemaldo          #+#    #+#             */
/*   Updated: 2023/07/09 22:07:03 by stouitou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_c(int map[6][6], int a, int b);
int		ft_check_h(int map[6][6], int a);
int		ft_check_v(int map[6][6], int a);
int		ft_check_v1(int map[6][6], int b);
int		ft_check_v2(int map[6][6], int b);
int		ft_check_h1(int map[6]);
int		ft_check_h2(int map[6]);
int		ft_valide_all(int map[6][6]);
void	ft_copy_2d(int dest[6][6], int src[6][6]);
void	ft_swap(int *a, int *b);
void	ft_check_fin(int tab[6][6]);
void	ft_gen(int res[6][6], int tab[6][6], int cur_i, int cur_l);

void	ft_print(int map[6][6])
{
	int		i;
	int		j;
	char	x;

	i = 1;
	j = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			x = map[i][j] + 48;
			write (1, &x, 1);
			write (1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

/*init map*/
void	ft_map(char *str, int map[6][6])
{
	int	i;
	int	j;
	int	m;
	int	n;

	i = 1;
	j = 0;
	m = 1;
	while (i <= 4)
	{
		map[0][i] = str[j] - '0';
		map[5][i] = str[8 + j] - '0';
		map[i][0] = str[16 + j] - '0';
		map[i][5] = str[24 + j] - '0';
		n = 1;
		while (n <= 4)
		{
			map[i][n] = n;
			n++;
		}
		i++;
		j += 2;
	}
}

/*init res*/
void	ft_res(int res[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			res[i][j] = 0;
			j++;
		}
		i++;
	}
}

/*main*/
int	main(int ac, char **av)
{
	int	map[6][6];
	int	res[6][6];

	if (ac == 2)
	{
		ft_res(res);
		ft_map(av[1], map);
		ft_gen(res, map, 1, 1);
		if (res[1][1] != 0)
			ft_print(res);
		else
			write(1, "error", 5);
	}
	else
		write(1, "error", 5);
	return (0);
}
