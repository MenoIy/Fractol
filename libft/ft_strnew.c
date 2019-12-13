/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:23:58 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/16 19:10:54 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = (void *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i < size + 1)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
