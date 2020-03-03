/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:37:48 by akovalyo          #+#    #+#             */
/*   Updated: 2020/03/02 18:54:37 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *cur;
	t_list *prev;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = tmp;
	}
	tmp = *begin_list;
	while (tmp)
	{
		prev = tmp;
		tmp = tmp->next;
		if (tmp && cmp(tmp->data, data_ref) == 0)
		{
			prev->next = tmp->next;
			free(tmp);
		}
	}
}
