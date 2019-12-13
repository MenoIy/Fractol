/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse_event.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 15:08:03 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 11:53:38 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdio.h>

static double	ft_interpolate(double start, double end, double interpolation)
{
	return (start + ((end - start) * interpolation));
}

void			ft_calculate_zoom(int x, int y, double prec, t_fractol *fractol)
{
	double	mouse_r;
	double	mouse_i;
	double	inter;

	mouse_r = fractol->re_min + (double)x *
		(fractol->re_max - fractol->re_min) / WIN_X;
	mouse_i = fractol->im_min + (double)y *
		(fractol->im_max - fractol->im_min) / WIN_Y;
	inter = 1 / prec;
	fractol->re_min = ft_interpolate(mouse_r, fractol->re_min, inter);
	fractol->re_max = ft_interpolate(mouse_r, fractol->re_max, inter);
	fractol->im_min = ft_interpolate(mouse_i, fractol->im_min, inter);
	fractol->im_max = ft_interpolate(mouse_i, fractol->im_max, inter);
}

int				ft_mouse_hook(int x, int y, t_fractol *fractol)
{
	t_setup	*setup;

	setup = fractol->setup;
	if (!fractol->fix && (fractol->type == JULIA || fractol->type == JULIA2))
	{
		ft_mlx_clear_img(setup, WIN_X, WIN_Y);
		fractol->cte_re = (double)((x * 1.5 - WIN_X) / WIN_X);
		fractol->cte_im = (double)((y * 1.5 - WIN_Y) / WIN_Y);
		ft_fractol(fractol);
	}
	return (0);
}

int				ft_mouse_clic(int button, int x, int y, t_fractol *fractol)
{
	t_setup	*setup;

	setup = fractol->setup;
	ft_mlx_clear_img(setup, WIN_X, WIN_Y);
	if (button == 5)
	{
		ft_calculate_zoom(x, y, 1.1, fractol);
		fractol->max_itter++;
	}
	else if (button == 4)
	{
		ft_calculate_zoom(x, y, 0.9, fractol);
		fractol->max_itter--;
		fractol->max_itter = fractol->max_itter < 50 ? 50 : fractol->max_itter;
	}
	ft_fractol(fractol);
	return (0);
}
