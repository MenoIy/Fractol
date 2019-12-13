/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minilibx.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 14:13:17 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:24:05 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MLX_H
# define FT_MLX_H

# include <mlx.h>
# include <stdlib.h>
# include "mathlibft.h"
# include "pthread.h"
# include "libft.h"

typedef struct	s_setup
{
	void		*mlx_ptr;
	void		*win_ptr;
	void		*img_ptr;
	char		*data;
	int			bpp;
	int			sizeline;
	int			endian;
	int			width;
	int			height;
}				t_setup;

typedef struct	s_thread_data
{
	void		*data;
	int			min;
	int			max;
}				t_thread_data;

typedef	struct	s_shap
{
	double		a;
	double		b;
	double		m;
	double		n1;
	double		n2;
	double		n3;
	double		phi;
}				t_shap;

t_setup			*ft_new_setup(int width, int height, char *title);
void			ft_mlx_clear_img(t_setup *setup, int x, int y);
int				ft_draw_img(t_setup *setup, int x, int y, t_color color);
double			ft_supershap_3d(t_shap value, double angle);
t_vector		ft_supershap_2d(t_shap value, double angle);

int				ft_thread_gestion(void *data, void *(*f)(void*)
				, int thread_number, int size);

#endif
