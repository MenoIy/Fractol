/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:55:27 by kdaou             #+#    #+#             */
/*   Updated: 2019/06/28 15:45:54 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n))
	{
		if (str1[i] < str2[i])
			return (str1[i] - str2[i]);
		if (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
