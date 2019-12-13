/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 10:23:16 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/18 16:15:31 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmp;

	tmp = *alst;
	while (tmp)
	{
		tmp = tmp->next;
		ft_lstdelone(alst, del);
		*alst = tmp;
	}
}
