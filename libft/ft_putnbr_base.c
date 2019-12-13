/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 11:50:14 by kdaou             #+#    #+#             */
/*   Updated: 2019/02/14 16:07:34 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(long long hexa, int base)
{
	char	*basestr;
	char	c;

	basestr = "0123456789abcdef";
	if (hexa >= (long long)base)
		ft_putnbr_base(hexa / base, base);
	c = *(basestr + hexa % base);
	ft_putchar(c);
}
