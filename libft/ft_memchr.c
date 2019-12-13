/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:36:26 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/17 10:30:12 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*s2;

	s2 = (unsigned char *)s;
	while (n--)
	{
		if (*s2 == (unsigned char)c)
			return (void *)s2;
		s2++;
	}
	return (NULL);
}
