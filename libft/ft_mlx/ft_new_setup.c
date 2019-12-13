/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_setup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:34:44 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 10:25:26 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

t_setup	*ft_new_setup(int width, int height, char *title)
{
	t_setup	*setup;
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;

	mlx_ptr = mlx_init();
	if (!(win_ptr = mlx_new_window(mlx_ptr, width, height, title)))
		return (NULL);
	if (!(img_ptr = mlx_new_image(mlx_ptr, width, height)))
		return (NULL);
	if (!(setup = (t_setup *)malloc(sizeof(t_setup))))
		return (NULL);
	setup->mlx_ptr = mlx_ptr;
	setup->win_ptr = win_ptr;
	setup->img_ptr = img_ptr;
	setup->width = width;
	setup->height = height;
	setup->data = mlx_get_data_addr(setup->img_ptr, &(setup->bpp),
			&(setup->sizeline), &(setup->endian));
	return (setup);
}
