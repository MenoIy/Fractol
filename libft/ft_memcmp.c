/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:51:04 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/16 12:29:19 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sc1;
	unsigned char	*sc2;
	size_t			i;

	i = -1;
	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while (++i < n && *(sc1 + i) == *(sc2 + i))
		;
	if (i == n)
		return (0);
	return (*(sc1 + i) - *(sc2 + i));
}
