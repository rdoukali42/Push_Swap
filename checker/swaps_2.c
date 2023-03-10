/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:06:00 by rdoukali          #+#    #+#             */
/*   Updated: 2022/07/01 19:50:54 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb_c(int *tab, int size)
{
	int	i;
	int	mem;

	i = 0;
	mem = tab[0];
	while (i < size - 1)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[i] = mem;
}

void	rr_c(int *tab1, int *tab2, int s1, int s2)
{
	int	i;
	int	mem;

	i = 0;
	mem = tab1[0];
	while (i < s1 - 1)
	{
		tab1[i] = tab1[i + 1];
		i++;
	}
	tab1[i] = mem;
	i = 0;
	mem = tab2[0];
	while (i < s2 - 1)
	{
		tab2[i] = tab2[i + 1];
		i++;
	}
	tab2[i] = mem;
}

void	rra_c(int *tab, int size)
{
	int	i;
	int	mem;

	i = size - 1;
	mem = tab[i];
	while (i >= 0)
	{
		tab[i + 1] = tab[i];
		i--;
	}
	tab[0] = mem;
}

void	rrb_c(int *tab, int size)
{
	int	i;
	int	mem;

	i = size - 1;
	mem = tab[i];
	while (i >= 0)
	{
		tab[i + 1] = tab[i];
		i--;
	}
	tab[0] = mem;
}

void	rrr_c(int *tab1, int *tab2, int s1, int s2)
{
	int	i;
	int	mem;

	i = s1 - 1;
	mem = tab1[i];
	while (i >= 0)
	{
		tab1[i + 1] = tab1[i];
		i--;
	}
	tab1[0] = mem;
	i = s2 - 1;
	mem = tab2[i];
	while (i >= 0)
	{
		tab2[i + 1] = tab2[i];
		i--;
	}
	tab2[0] = mem;
}
