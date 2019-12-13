/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 10:33:20 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/20 15:03:41 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b2;
	unsigned char	ch;

	ch = (unsigned char)c;
	b2 = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		b2[i] = ch;
		i++;
	}
	return (b2);
}
