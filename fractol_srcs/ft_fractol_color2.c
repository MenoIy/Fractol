/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractol_color2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 13:00:09 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:09:32 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdio.h>

static t_color	ft_psy_color(int i)
{
	t_color	color;

	color = ft_color_create(sin((double)i) * 127 + 128,
			cos((double)i) * 127 + 128,
			sin(0.3 * (double)i) * 127 + 128,
			0);
	return (color);
}

static t_color	ft_golden_color(int i)
{
	t_color	color;

	color = ft_color_create(sin(0.3 * (double)i + 3) * 127 + 100,
			sin(0.3 * (double)i + 3) * 127 + 100,
			sin(0.3 * (double)i),
			0);
	return (color);
}

static t_color	ft_zybra_color(t_vector z)
{
	t_color color;

	if (z.y > 0)
		color = ft_color_create(0, 0, 0, 0);
	else
		color = ft_color_create(255, 255, 255, 0);
	return (color);
}

static t_color	ft_test_color(t_fractol *fractol, int i)
{
	t_color	color;

	color = ft_color_create(sin(0.3 * (double)i + 0.0) * 127 + fractol->r,
			sin(0.3 * (double)i + 2.0) * 127 + fractol->g,
			sin(0.3 * (double)i + 4.0) * 127 + fractol->b,
			0);
	color.r = color.r < 0 ? 0 : color.r;
	color.g = color.g < 0 ? 0 : color.g;
	color.b = color.b < 0 ? 0 : color.b;
	return (color);
}

t_color			ft_fractol_color_2(t_fractol *fractol, int i, t_vector z)
{
	t_color	color;

	color = ft_color_create(255, 255, 255, 0);
	if (fractol->color == 5)
		color = ft_psy_color(i);
	else if (fractol->color == 6)
		color = ft_golden_color(i);
	else if (fractol->color == 7)
		color = ft_zybra_color(z);
	else if (fractol->color == 8)
		color = ft_test_color(fractol, i);
	return (color);
}
