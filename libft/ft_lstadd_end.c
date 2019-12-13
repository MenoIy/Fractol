/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 22:44:09 by kdaou             #+#    #+#             */
/*   Updated: 2018/12/13 00:36:12 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_end(t_list **begin_list, t_list *element)
{
	t_list	*tmp_list;

	tmp_list = *begin_list;
	if (*begin_list == NULL)
		*begin_list = element;
	else
	{
		while (tmp_list->next)
			tmp_list = tmp_list->next;
		tmp_list->next = element;
	}
}
