/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 09:57:20 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:26:57 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "ft_mlx.h"
# include "libft.h"
# include "mathlibft.h"
# include <pthread.h>
# define WIN_X 800
# define WIN_Y 800
# define LOG2 3.32192809489
# define MANDELBROT 1
# define JULIA 2
# define BURNING_SHIP 3
# define BIRD 4
# define TRIBROT 5
# define JULIA2 6
# define TRICORN 7
# define C_MANDEL 8
# define C_BUFFA 9
# define INVERTED 10

typedef struct	s_fractol
{
	double		re_min;
	double		re_max;
	double		im_min;
	double		im_max;
	int			height;
	int			width;
	double		cte_re;
	double		cte_im;
	double		cte_x;
	double		cte_y;
	double		move_x;
	double		move_y;
	int			color;
	double		r;
	double		g;
	double		b;
	int			fix;
	int			max_itter;
	int			type;
	t_setup		*setup;
}				t_fractol;

int				ft_mandelbrot(int max, t_vector point, t_vector *zn);
int				ft_julia(t_fractol *fractol, t_vector point, t_vector *zn);
int				ft_burning_ship(int max, t_vector point, t_vector *zn);
int				ft_bird(int max, t_vector point, t_vector *zn);
int				ft_tribrot(int max, t_vector point, t_vector *zn);
int				ft_julia2(t_fractol *fractol, t_vector vector, t_vector *zn);
int				ft_tricorn(int max, t_vector vector, t_vector *zn);
int				ft_cubic_mandelbar(int max, t_vector point, t_vector *zn);
int				ft_celtic_buffalo(int max, t_vector point, t_vector *zn);
int				ft_inverted_mandel(int max, t_vector point, t_vector *zn);

int				ft_mouse_hook(int x, int y, t_fractol *fractol);
int				ft_mouse_clic(int button, int x, int y, t_fractol *fractol);
int				ft_key_clic(int button, t_fractol *fractol);

void			ft_fractol_initialiser(t_fractol *fractol);
int				ft_fractol(t_fractol *fractol);
void			ft_fractol_exit(t_fractol *fractol);
void			ft_print_commande(void);

t_color			ft_fractol_color(t_fractol *fractol, int i, t_vector z);
t_color			ft_fractol_color_2(t_fractol *fractol, int i, t_vector z);

#endif
