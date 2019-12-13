/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mathlibft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 09:04:43 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:21:56 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHLIBFT_H
# define MATHLIBFT_H
# define DEGTORAD(angleInDegrees) ((angleInDegrees) * M_PI / 180.0)
# define RADTODEG(angleInRadians) ((angleInRadians) * 180.0 / M_PI)
# include "libft.h"
# include "math.h"

typedef struct		s_vector
{
	double			x;
	double			y;
	double			z;
	double			w;
}					t_vector;

typedef struct		s_color
{
	double	r;
	double	g;
	double	b;
	double	a;
}					t_color;

t_color				ft_color_create(double r, double g, double b, double a);
t_color				ft_color_copy(t_color color);
t_color				ft_color_add(t_color color, t_color to_add);
t_color				ft_color_scale(t_color color, double scale);
t_color				ft_color_mult(t_color color, t_color to_mult);
int					ft_color_toint(t_color color);
t_color				ft_color_fromint(int color);
t_color				ft_color_palette(int indice);
t_color				ft_color_gradient(double indice, t_color start,
					t_color end, int size);

t_vector			ft_vector_create(double x, double y, double z, double w);
t_vector			ft_vector_copy(t_vector vector);
t_vector			ft_vector_normalize(t_vector vector);
t_vector			ft_vector_add(t_vector vector, t_vector to_add);
t_vector			ft_vector_sub(t_vector vector, t_vector to_sub);
t_vector			ft_vector_scalarprod(t_vector vector, double k);
t_vector			ft_vector_crossprod(t_vector a, t_vector b);
double				ft_vector_magnitude(t_vector vector);
double				ft_vector_dotprod(t_vector a, t_vector b);
double				ft_vector_cos(t_vector a, t_vector b);

#endif
