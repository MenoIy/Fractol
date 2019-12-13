/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_event.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:35:51 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 11:54:22 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	ft_key_palette(int key, t_fractol *fractol)
{
	if (key == 18)
		fractol->r += fractol->r + 2 > 255 ? 0 : 2;
	else if (key == 19)
		fractol->r -= fractol->r - 2 < 0 ? 0 : 2;
	else if (key == 20)
		fractol->g += fractol->g + 2 > 255 ? 0 : 2;
	else if (key == 21)
		fractol->g -= fractol->g - 2 < 0 ? 0 : 2;
	else if (key == 23)
		fractol->b += fractol->b + 2 > 255 ? 0 : 2;
	else if (key == 22)
		fractol->b -= fractol->b - 2 < 0 ? 0 : 2;
	return (0);
}

static int	ft_key_color(int key, t_fractol *fractol)
{
	int	c;

	c = fractol->color;
	if (key == 83)
		fractol->color = 1;
	else if (key == 84)
		fractol->color = 2;
	else if (key == 85)
		fractol->color = 3;
	else if (key == 86)
		fractol->color = 4;
	else if (key == 87)
		fractol->color = 5;
	else if (key == 88)
		fractol->color = 6;
	else if (key == 89)
		fractol->color = 7;
	else if (key == 91)
		fractol->color = 8;
	return (c == fractol->color ? 0 : 1);
}

static int	ft_key_move(int key, t_fractol *fractol)
{
	double move_x;
	double move_y;

	move_x = 2 * (fractol->re_max - fractol->re_min) / fractol->width;
	move_y = 2 * (fractol->im_max - fractol->im_min) / fractol->height;
	if (key == 126)
		fractol->move_y += move_y;
	else if (key == 125)
		fractol->move_y -= move_y;
	else if (key == 123)
		fractol->move_x += move_x;
	else if (key == 124)
		fractol->move_x -= move_x;
	return (0);
}

static int	ft_key_fix(int key, t_fractol *fractol)
{
	int	tmp;

	tmp = fractol->fix;
	if (key == 3 && (fractol->type == JULIA || fractol->type == JULIA2))
		fractol->fix = 1;
	else if (key == 2 && (fractol->type == JULIA || fractol->type == JULIA2))
		fractol->fix = 0;
	return (tmp == fractol->fix ? 0 : 1);
}

int			ft_key_clic(int key, t_fractol *fractol)
{
	t_setup	*setup;

	setup = fractol->setup;
	if (key == 53)
		ft_fractol_exit(fractol);
	else if (key == 116)
	{
		ft_fractol_initialiser(fractol);
		fractol->type = fractol->type + 1 > 10 ? 1 : fractol->type + 1;
	}
	else if (key == 121)
	{
		ft_fractol_initialiser(fractol);
		fractol->type = fractol->type - 1 < 1 ? 10 : fractol->type - 1;
	}
	else if (key == 36)
		ft_fractol_initialiser(fractol);
	ft_key_move(key, fractol);
	ft_key_color(key, fractol);
	ft_key_fix(key, fractol);
	ft_key_palette(key, fractol);
	ft_mlx_clear_img(setup, WIN_X, WIN_Y);
	ft_fractol(fractol);
	return (1);
}
