/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:11:35 by kdaou             #+#    #+#             */
/*   Updated: 2019/03/07 17:08:35 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap_list(t_list *a, t_list *b)
{
	t_list	tmp;

	tmp.content = a->content;
	tmp.content_size = a->content_size;
	a->content = b->content;
	a->content_size = b->content_size;
	b->content = tmp.content;
	b->content_size = tmp.content_size;
}

void		ft_list_sort(t_list *lst, int (*cmp)())
{
	t_list	*cur;

	while (lst != NULL)
	{
		cur = lst->next;
		while (cur != NULL)
		{
			if ((*cmp)(lst->content, cur->content) > 0)
				ft_swap_list(lst, cur);
			cur = cur->next;
		}
		lst = lst->next;
	}
}
