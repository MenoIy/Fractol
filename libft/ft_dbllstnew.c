/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbllstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:16:41 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:38:49 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_dbllstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->content_size = content_size;
	if (!content)
		new->content_size = 0;
	new->content = (void *)content;
	new->next = NULL;
	new->previous = NULL;
	return (new);
}
