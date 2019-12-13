/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:37:38 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/09 10:46:31 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	char	*strr;

	strr = (char *)str;
	if (to_find[0] == '\0')
		return (strr);
	i = 0;
	while (strr[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
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
