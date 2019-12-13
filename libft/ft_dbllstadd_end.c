/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbllstadd_end.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:10:49 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:39:00 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dbllstadd_end(t_list **head, t_list *list)
{
	t_list	*tmp;

	tmp = *head;
	if (*head == NULL)
		*head = list;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = list;
		list->previous = tmp;
	}
}
