/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractol_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 09:48:52 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:08:10 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static t_color	ft_rainbow_color(int i)
{
	t_color	color;

	color = ft_color_create(sin(0.3 * (double)i + 0.0) * 127.0 + 128.0,
			sin(0.3 * (double)i + 2.0) * 127.0 + 128.0,
			sin(0.3 * (double)i + 4.0) * 127.0 + 128.0,
			0);
	return (color);
}

static t_color	ft_noir_blanc_color(int i)
{
	t_color	color;

	color = ft_color_create(sin(0.3 * (double)i) * 127.0 + 128.0,
			sin(0.3 * (double)i) * 127.0 + 128.0,
			sin(0.3 * (double)i) * 127.0 + 128.0,
			0);
	return (color);
}

static t_color	ft_fire_color(int i)
{
	t_color	color;

	color = ft_color_create(sin(0.3 * (double)i + 3) * 127 + 128,
			sin(0.3 * (double)i + 3),
			sin(0.3 * (double)i + 3),
			0);
	return (color);
}

static t_color	ft_aqua_color(int i)
{
	t_color	color;

	color = ft_color_create(sin(0.3 * (double)i),
			sin(0.3 * (double)i + 3) * 127.0 + 128.0,
			sin(0.3 * (double)i + 3) * 127.0 + 128.0,
			0);
	return (color);
}

t_color			ft_fractol_color(t_fractol *fractol, int i, t_vector z)
{
	t_color	color;

	color = ft_rainbow_color(i);
	if (fractol->color == 1)
		color = ft_rainbow_color(i);
	else if (fractol->color == 2)
		color = ft_noir_blanc_color(i);
	else if (fractol->color == 3)
		color = ft_fire_color(i);
	else if (fractol->color == 4)
		color = ft_aqua_color(i);
	else
		color = ft_fractol_color_2(fractol, i, z);
	return (color);
}
