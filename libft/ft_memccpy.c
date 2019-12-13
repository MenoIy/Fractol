/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:09:44 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/16 12:00:17 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	unsigned char	cr;

	ds = (unsigned char*)dst;
	sr = (unsigned char*)src;
	cr = (unsigned char)c;
	while (n--)
	{
		*ds++ = *sr;
		if (*sr == cr)
			return ((void*)ds);
		sr++;
	}
	return (NULL);
}
