/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:39:15 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/17 10:32:51 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;
	char	*strr;

	strr = (char *)str;
	if (to_find[0] == '\0')
		return (strr);
	i = 0;
	while (strr[i] != '\0' && i < len)
	{
		j = 0;
		while (to_find[j] != '\0' && i + j < len)
		{
			if (strr[i + j] != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (strr + i);
		i++;
	}
	return (0);
}
