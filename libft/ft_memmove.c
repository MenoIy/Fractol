/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 14:19:09 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/20 15:34:08 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;

	d = (unsigned char *)dst;
	s = (const char *)src;
	if (src >= dst)
		dst = ft_memcpy(dst, src, n);
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (d);
}
