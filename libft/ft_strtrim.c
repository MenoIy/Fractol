/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 11:54:36 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/17 15:07:03 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	l;
	size_t	len;
	char	*tronc;

	i = 0;
	if (s == NULL)
		return (NULL);
	l = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (l && (s[l] == ' ' || s[l] == '\n' || s[l] == '\t'))
		l--;
	if (l == 0)
		return (ft_strsub(s, 0, 0));
	len = l - i + 1;
	tronc = ft_strsub(s, i, len);
	return (tronc);
}
