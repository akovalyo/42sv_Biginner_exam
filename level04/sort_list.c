/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 15:25:10 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 14:29:33 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	swap_data(t_list *lst1, t_list *lst2)
{
	int tmp;

	tmp = lst1->data;
	lst1->data = lst2->data;
	lst2->data = tmp;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *head;

	head = lst;
	while (head)
	{
		if (cmp(head->data, head->next->data) != 0)
			head = head->next;
		else
		{
			swap_data(head, head->next);
			head = lst;
		}
	}
	return (lst);
}
