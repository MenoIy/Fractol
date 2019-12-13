/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 14:12:14 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:34:01 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

int	ft_draw_img(t_setup *setup, int x, int y, t_color color)
{
	setup->data[(x * (setup->bpp / 8)) + (y * setup->sizeline)] =
		(unsigned char)color.b;
	setup->data[(x * (setup->bpp / 8)) + (y * setup->sizeline) + 1] =
		(unsigned char)color.g;
	setup->data[(x * (setup->bpp / 8)) + (y * setup->sizeline) + 2] =
		(unsigned char)color.r;
	setup->data[(x * (setup->bpp / 8)) + (y * setup->sizeline) + 3] =
		(unsigned char)color.a;
	return (0);
}
