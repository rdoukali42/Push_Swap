/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:13:14 by rdoukali          #+#    #+#             */
/*   Updated: 2022/07/08 21:25:20 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_sort_lst(int *a, int s1, t_list *sort, int s5)
{
	t_list	*tmp;
	int		i;
	int		j;

	i = 0;
	tmp = sort;
	while (i < s1)
	{
		j = 0;
		while (j < s5)
		{
			if (a[i] == tmp->data)
				return (0);
			j++;
			tmp = tmp->next;
		}
		tmp = sort;
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
			i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - '0');
		else
			ft_error(sign);
		if (res > 2147483647 && sign == 1)
			ft_error(sign);
		if (res > 2147483648 && sign == -1)
			ft_error(sign);
		i++;
	}
	return ((int)(res * sign));
}

int	iss_digit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int	*tab_dup(int *tab, int size)
{
	int	*dup;
	int	i;

	i = 0;
	dup = malloc(sizeof(int) * size);
	while (i < size)
	{
		dup[i] = tab[i];
		i++;
	}
	return (dup);
}

int	*fill_tab(char **av, int size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab[i] = ft_atoi(av[i + 1]);
		i++;
	}
	return (tab);
}
