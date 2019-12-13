/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 10:49:06 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/13 19:19:14 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tronc;
	unsigned int	i;
	int				j;

	i = 0;
	if (!s)
		return (NULL);
	if (!(tronc = (char *)malloc(len + 1)))
		return (NULL);
	while (i != start)
		i++;
	j = 0;
	while (i < start + len && s[i])
	{
		tronc[j] = s[i];
		i++;
		j++;
	}
	tronc[j] = '\0';
	return (tronc);
}
