/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:19:47 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/10 18:47:45 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;
	size_t	k;

	k = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst < size)
		k = size - lendst - 1;
	i = 0;
	while (i < k && src[i])
	{
		dst[i + lendst] = src[i];
		i++;
	}
	dst[i + lendst] = '\0';
	if (size > lendst)
		return (lendst + lensrc);
	else
		return (lensrc + size);
}
