/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:06:58 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/17 10:31:42 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		s;
	char	*dest;
	int		i;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (!(dest = (char *)malloc(sizeof(*dest) * (s + 1))))
		return (NULL);
	while (i < s)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
