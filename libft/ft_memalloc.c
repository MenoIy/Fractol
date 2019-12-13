/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:26:30 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/11 16:36:16 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = 0;
	if (!(ptr = (void *)malloc(sizeof(size_t) * size)))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
