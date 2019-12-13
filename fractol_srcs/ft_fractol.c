/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mandelbrot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 10:01:14 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 11:10:17 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int		ft_itteration(t_fractol *fractol, t_vector point, t_vector *z)
{
	if (fractol->type == MANDELBROT)
		return (ft_mandelbrot(fractol->max_itter, point, z));
	else if (fractol->type == JULIA)
		return (ft_julia(fractol, point, z));
	else if (fractol->type == BURNING_SHIP)
		return (ft_burning_ship(fractol->max_itter, point, z));
	else if (fractol->type == BIRD)
		return (ft_bird(fractol->max_itter, point, z));
	else if (fractol->type == TRIBROT)
		return (ft_tribrot(fractol->max_itter, point, z));
	else if (fractol->type == JULIA2)
		return (ft_julia2(fractol, point, z));
	else if (fractol->type == TRICORN)
		return (ft_tricorn(fractol->max_itter, point, z));
	else if (fractol->type == C_MANDEL)
		return (ft_cubic_mandelbar(fractol->max_itter, point, z));
	else if (fractol->type == C_BUFFA)
		return (ft_celtic_buffalo(fractol->max_itter, point, z));
	else if (fractol->type == INVERTED)
		return (ft_inverted_mandel(fractol->max_itter, point, z));
	return (0);
}

static void		ft_draw_fractol(t_fractol *fractol,
		t_vector point, int x, int y)
{
	int			i;
	t_color		color;
	t_vector	z;

	i = ft_itteration(fractol, point, &z);
	if (i == fractol->max_itter &&
			(fractol->type != JULIA && fractol->type != JULIA2))
		color = ft_color_create(0, 0, 0, 0);
	else
		color = ft_fractol_color(fractol, i, z);
	ft_draw_img(fractol->setup, x, y, color);
}

static void		*ft_ini_fractol(void *arg)
{
	t_thread_data	*data_thread;
	t_fractol		*fractol;
	t_vector		point;
	int				x;
	int				y;

	data_thread = arg;
	fractol = (t_fractol *)data_thread->data;
	y = data_thread->min;
	point = ft_vector_create(0, 0, 0, 0);
	while (y < data_thread->max)
	{
		x = 0;
		point.y = (y / fractol->cte_y) + fractol->im_min + fractol->move_y;
		while (x < fractol->width)
		{
			point.x = (x / fractol->cte_x) + fractol->re_min + fractol->move_x;
			ft_draw_fractol(fractol, point, x, y);
			x++;
		}
		y++;
	}
	pthread_exit(NULL);
}

int				ft_fractol(t_fractol *fractol)
{
	t_setup	*setup;

	setup = fractol->setup;
	fractol->cte_x = (fractol->width / (fractol->re_max - fractol->re_min));
	fractol->cte_y = (fractol->height / (fractol->im_max - fractol->im_min));
	if (!(ft_thread_gestion(fractol, ft_ini_fractol, 4, WIN_Y)))
		return (0);
	mlx_put_image_to_window(setup->mlx_ptr, setup->win_ptr,
			setup->img_ptr, 0, 0);
	return (1);
}
