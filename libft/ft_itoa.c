/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:26:40 by kdaou             #+#    #+#             */
/*   Updated: 2018/10/17 19:28:46 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_taille(int n)
{
	unsigned int	nb;
	size_t			taille;

	if (n < 0)
	{
		nb = n * -1;
		taille = 1;
	}
	if (n > 0)
	{
		taille = 0;
		nb = n;
	}
	if (n == 0)
	{
		nb = 0;
		taille = 1;
	}
	while (nb >= 1)
	{
		nb = nb / 10;
		taille++;
	}
	return (taille);
}

static char		*ft_stralloc(int n)
{
	size_t	len;
	char	*str;

	len = ft_taille(n);
	if (!(str = (void *)malloc(len + 1)))
		return (NULL);
	return (str);
}

char			*ft_itoa(int n)
{
	char			*s;
	unsigned int	nm;
	size_t			l;

	l = ft_taille(n) - 1;
	s = ft_stralloc(n);
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		nm = n * -1;
	}
	if (n > 0)
		nm = n;
	if (n == 0)
		s[l] = 0 + '0';
	s[l + 1] = '\0';
	while (nm >= 1)
	{
		s[l] = (nm % 10) + '0';
		nm = nm / 10;
		l--;
	}
	return (s);
}
