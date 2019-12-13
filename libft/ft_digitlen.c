/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 08:22:19 by kdaou             #+#    #+#             */
/*   Updated: 2019/02/14 16:06:42 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitlen(intmax_t n, int base)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= base;
		++count;
	}
	return (count);
}

int	ft_udigitlen(uintmax_t n, int base)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= base;
		++count;
	}
	return (count);
}
