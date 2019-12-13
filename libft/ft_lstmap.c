/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 16:49:37 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/19 13:20:56 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*maillon;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	maillon = f(lst);
	new = maillon;
	while (lst->next)
	{
		lst = lst->next;
		if (!(maillon->next = f(lst)))
		{
			free(maillon->next);
			return (NULL);
		}
		else
			maillon = maillon->next;
	}
	return (new);
}
