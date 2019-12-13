/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_putnbrmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 08:25:57 by kdaou             #+#    #+#             */
/*   Updated: 2019/01/17 16:09:28 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrmax(uintmax_t n)
{
	uintmax_t nb;

	nb = n;
	if (nb >= 10)
	{
		ft_putnbrmax(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putintmax(intmax_t n)
{
	uintmax_t nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (nb >= 10)
	{
		ft_putintmax(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}
