/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdurand <thdurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:55:14 by lifan             #+#    #+#             */
/*   Updated: 2023/07/16 23:09:22 by thdurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_numbers
{
	char	three[4];
	int		pos;
	char	*str;
}			t_numbers;

typedef struct s_dict
{
	int		found;
	int		index;
	int		size;
}			t_dict;

void		ft_argument(int ac, char **av, char **dict, char **value);
int			ft_check_value(char *value);
int			ft_file(char *dict);
int			ft_positive(int nb);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);
int			ft_size(t_numbers **tab);
int			ft_len_all(int size, t_numbers **tab, char *sep);
int			ask(t_numbers **tab, char *filename);
int			findandstock(char *dicto, t_numbers *nb, t_dict *dic);
int			ft_intfind(char *filename, int num, t_numbers nb, t_dict dic);
int			ft_creat(t_numbers **nbstrs, char *value, int last_nmb,
				int pair_nmb);
int			ft_strstr(char *str, char *to_find);
int			ft_strc(char *str, char to_find);
void		ft_putchar(char c);
void		ft_putstr(char *str);
char		*ft_strcat(char *dest, char *src);
char		*ft_strcpy(char *dest, char *src);
char		*dico(char *filename);
void		ft_free(t_numbers **tab, char *phrase, char *value);
char		*ft_phrase(t_numbers **tab);
void		ft_getthree1(t_numbers *nbr, char *value, int last_nmb);
void		ft_getthree2(t_numbers *nbr, char *value, int last_nmb,
				int pair_nmb);
void		ft_find_str(char *dicto, char *nb, t_dict *dic);
void		ft_find_c(char *dicto, char nb, t_dict *dic);
char		*mallocat(char *str1, char *str2);
char		*ft_stock(char *dicto, t_dict *dic);
void		strcount(char **final, t_numbers *nb);
void		stocat(t_numbers *nb, char **final);
int			tfind5(char *dicto, t_numbers *nb, t_dict *dic, char **str);
int			tfind4(char *dicto, t_numbers *nb, t_dict *dic, char **str);
int			tfind3(char *dicto, t_numbers *nb, t_dict *dic, char **str);
int			tfind2(char *dicto, t_numbers *nb, t_dict *dic, char **str);
int			tfind1(char *dicto, t_numbers *nb, t_dict *dic, char **str);
char		*ft_readstdin(void);
t_numbers	**ft_numbers(char *value);
t_dict		*ft_sort(int fd, t_numbers *nb);
char		*removespace(char *word, int i, int j, int k);
int			initchar(char ***final);
char		*malnull(void);
int			finallyfree(char **final);
char		*ft_addspace(char *str);
int			ft_check(t_numbers *nb);
char		*ft_killzero(char *value, int i, int j);
int			ft_checkzero(t_numbers **nb);
int			zerofound(t_numbers **nb, char *dicto, t_dict *dic);
char		*ft_strdup(char *src);

#endif
