/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractol_management.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:20:08 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:13:14 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_fractol_initialiser(t_fractol *fractol)
{
	fractol->re_min = -2.0;
	fractol->re_max = 2.0;
	fractol->im_min = -2.0;
	fractol->im_max = 2.0;
	fractol->cte_x = 0;
	fractol->cte_y = 0;
	fractol->cte_re = 0.0;
	fractol->cte_im = 0.0;
	fractol->move_x = 0;
	fractol->move_y = 0;
	fractol->max_itter = 50;
	fractol->r = 34;
	fractol->g = 167;
	fractol->b = 40;
	fractol->fix = 0;
}

void	ft_fractol_exit(t_fractol *fractol)
{
	mlx_destroy_image(fractol->setup->mlx_ptr, fractol->setup->img_ptr);
	mlx_clear_window(fractol->setup->mlx_ptr, fractol->setup->win_ptr);
	mlx_destroy_window(fractol->setup->mlx_ptr, fractol->setup->win_ptr);
	ft_memdel((void **)&(fractol->setup));
	ft_memdel((void **)&(fractol));
	exit(1);
}

void	ft_print_commande(void)
{
	ft_putendl("commande :\n\t=> zoom :\n\t{\n\t\tmouse scroll Up && mouse "
	"scroll down\n\t}\n\t=> move : \n\t{\n\t\tarrow keys Up "
	"down left right\n\t}");
	ft_putendl("\t=> julia lock and unlock : button F and  D");
	ft_putendl("\t=> fractol type change : page up and down");
	ft_putendl("\t=> color change : pave numeric 1 to 8");
	ft_putendl("\t=> reset : Button Entre");
	ft_putendl("\t=>Rgb change only color 8 :\n\t{\n\t\t1 and 2 red +-"
			"\n\t\t3 and 4 green +- \n\t\t5 and 6 blue +-\n\t}");
}
