/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:40:42 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/17 10:44:47 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	if (str1[i] == str2[i])
		return (0);
	else if (str1[i] < str2[i])
		return (str1[i] - str2[i]);
	return (str1[i] - str2[i]);
}
