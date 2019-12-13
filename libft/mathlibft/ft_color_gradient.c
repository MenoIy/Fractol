/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_gradient.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 11:56:35 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:31:57 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

static double		ft_percent(int size, double i)
{
	return ((size == 0) ? 1.0 : (i / (size * 1.0)));
}

static double		ft_get_light(double start, double end, double perc)
{
	return ((1 - perc) * start + (end * perc));
}

t_color				ft_color_gradient(double indice, t_color start,
										t_color end, int size)
{
	t_color	out;
	double	perc;

	perc = ft_percent(size, indice);
	out = ft_color_create(0, 0, 0, 0);
	out.r = ft_get_light(start.r, end.r, perc);
	out.g = ft_get_light(start.g, end.g, perc);
	out.b = ft_get_light(start.b, end.b, perc);
	out.a = ft_get_light(start.a, end.a, perc);
	return (out);
}
