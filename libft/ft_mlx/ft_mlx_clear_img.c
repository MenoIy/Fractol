/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_clear_img.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 15:09:00 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:34:32 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

void	ft_mlx_clear_img(t_setup *setup, int x, int y)
{
	void	*img_ptr;

	mlx_destroy_image(setup->mlx_ptr, setup->img_ptr);
	img_ptr = mlx_new_image(setup->mlx_ptr, x, y);
	setup->img_ptr = img_ptr;
	setup->data = mlx_get_data_addr(setup->img_ptr, &(setup->bpp),
			&(setup->sizeline), &(setup->endian));
}
