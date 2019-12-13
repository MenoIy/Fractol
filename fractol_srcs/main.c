/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 09:52:10 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 11:36:27 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int			ft_get_fractol_type(char *str)
{
	int	type;

	type = 0;
	if (ft_strcmp(str, "1") == 0)
		type = MANDELBROT;
	else if (ft_strcmp(str, "2") == 0)
		type = JULIA;
	else if (ft_strcmp(str, "3") == 0)
		type = BURNING_SHIP;
	else if (ft_strcmp(str, "4") == 0)
		type = BIRD;
	else if (ft_strcmp(str, "5") == 0)
		type = TRIBROT;
	else if (ft_strcmp(str, "6") == 0)
		type = JULIA2;
	else if (ft_strcmp(str, "7") == 0)
		type = TRICORN;
	else if (ft_strcmp(str, "8") == 0)
		type = C_MANDEL;
	else if (ft_strcmp(str, "9") == 0)
		type = C_BUFFA;
	else if (ft_strcmp(str, "10") == 0)
		type = INVERTED;
	return (type);
}

static void			ft_print_usage(void)
{
	ft_putendl_fd("usage : ./fractol fractol number", 2);
	ft_putendl_fd("fractol type : \n{\n\t1 - Mandelbrot.\n\t"
			"2 - Julia.\n\t3 - Burning ship.\n\t4 - Bird.\n\t"
			"5 - Tribrot.\n\t6 - julia v2.\n\t7 - Tricorn."
			"\n\t8 - cubic mandelbrot.\n\t9 - cubic buffalo.\n\t"
			"10 - Inverted mandelbrot.\n}", 2);
}

static t_fractol	*ft_fractol_create(int h, int w, int type)
{
	t_fractol	*fractol;

	if (!(fractol = (t_fractol *)malloc(sizeof(t_fractol))))
		return (NULL);
	fractol->re_min = -2.0;
	fractol->re_max = 2.0;
	fractol->im_min = -2.0;
	fractol->im_max = 2.0;
	fractol->height = h;
	fractol->width = w;
	fractol->cte_x = 0;
	fractol->cte_y = 0;
	fractol->cte_re = 0.0;
	fractol->cte_im = 0.0;
	fractol->max_itter = 50;
	fractol->fix = 0;
	fractol->type = type;
	fractol->color = 1;
	fractol->r = 34;
	fractol->g = 167;
	fractol->b = 40;
	fractol->move_x = 0;
	fractol->move_y = 0;
	fractol->setup = NULL;
	return (fractol);
}

static int			ft_error_gestion(int argc, char **argv)
{
	int type;

	if (argc != 2)
	{
		ft_print_usage();
		return (0);
	}
	if (!(type = ft_get_fractol_type(argv[1])))
	{
		ft_putendl_fd("Error : Invalid fractol type!", 2);
		return (0);
	}
	return (type);
}

int					main(int argc, char **argv)
{
	t_fractol	*fractol;
	int			type;

	if (!(type = ft_error_gestion(argc, argv)))
		return (1);
	if (!(fractol = ft_fractol_create(WIN_X, WIN_Y, type)))
		return (1);
	if (!(fractol->setup = ft_new_setup(WIN_X, WIN_Y, "Fractol")))
	{
		ft_memdel((void **)&fractol);
		return (1);
	}
	ft_print_commande();
	if (!ft_fractol(fractol))
		ft_fractol_exit(fractol);
	mlx_hook(fractol->setup->win_ptr, 6, 0, ft_mouse_hook, fractol);
	mlx_mouse_hook(fractol->setup->win_ptr, ft_mouse_clic, fractol);
	mlx_hook(fractol->setup->win_ptr, 2, 0, ft_key_clic, fractol);
	mlx_loop(fractol->setup->mlx_ptr);
	return (0);
}
