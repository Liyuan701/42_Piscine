/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lifan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:41:55 by lifan             #+#    #+#             */
/*   Updated: 2023/07/10 19:20:49 by lifan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(int *str)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = str[i] + 48;
		ft_putchar(c);
		i++;
	}
}

/* a is the current col*/
int	ft_check(int *q, int b, int a)
{
	int	i;

	i = 0;
	while (i < b)
	{
		if (a == q[i])
			return (0);
		if (a + b == q[i] + i)
			return (0);
		if (b - a == i - q[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_gen(int *q, int b, int *count)
{
	int	i;

	if (b == 10)
	{
		*count += 1;
		ft_putstr(q);
		ft_putchar('\n');
	}
	else
	{	
		i = 0;
		while (i < 10)
		{
			if (ft_check(q, b, i))
			{
				q[b] = i;
				ft_gen(q, b + 1, count);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	q[10];
	int	count;
	int	i;

	i = 0;
	while (i < 10)
	{
		q[i] = -1;
		i++;
	}
	count = 0;
	ft_gen(q, 0, &count);
	return (count);
}

/*#include <stdio.h>
int	main()
{
	ft_ten_queens_puzzle();
	printf("%d\n", ft_ten_queens_puzzle());
}*/
