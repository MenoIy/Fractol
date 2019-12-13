/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 11:09:51 by kdaou             #+#    #+#             */
/*   Updated: 2019/02/06 15:27:33 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fraiche;
	size_t	ls1;
	size_t	ls2;

	if ((!s1) || (!s2))
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	if (!(fraiche = (void *)malloc(ls1 + ls2 + 1)))
		return (NULL);
	ft_strcpy(fraiche, s1);
	ft_strcat(fraiche, s2);
	return (fraiche);
}
