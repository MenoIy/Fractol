/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 09:24:33 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/16 18:58:49 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	l;
	size_t	i;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (!(str = (char *)malloc(l + 1)))
		return (NULL);
	i = 0;
	while (i < l)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
