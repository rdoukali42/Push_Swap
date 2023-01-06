/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdoukali <rdoukali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:32:16 by rdoukali          #+#    #+#             */
/*   Updated: 2022/07/08 18:59:24 by rdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_lst_norm(t_list *lst, t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp && tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = lst;
}

t_list	*sort_lst(int *sort, int s_s, int s_e)
{
	int		i;
	t_list	*lst;
	t_list	*head;

	if (s_e <= s_s)
		return (NULL);
	head = NULL;
	i = s_s;
	while (i < s_e)
	{
		lst = (t_list *)malloc(sizeof(t_list));
		if (!lst)
			return (NULL);
		lst->data = sort[i];
		lst->next = NULL;
		if (head == NULL)
			head = lst;
		else
			sort_lst_norm(lst, head);
		i++;
	}
	return (head);
}
