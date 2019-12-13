/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:00:22 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/10 11:55:51 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	sr = (unsigned char*)src;
	ds = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (ds);
}
