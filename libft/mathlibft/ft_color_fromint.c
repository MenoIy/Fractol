/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_fromint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:21:49 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/07 14:33:15 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_color	ft_color_fromint(int color)
{
	int a;
	int	b;
	int	g;
	int	r;

	r = (color >> 16) & 0xff;
	g = (color >> 8) & 0xff;
	b = (color & 0xff);
	a = (color >> 24) & 0xff;
	return (ft_color_create(r, g, b, a));
}
