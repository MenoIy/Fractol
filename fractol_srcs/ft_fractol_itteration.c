/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractol_itteration.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 08:29:00 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:11:35 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_julia(t_fractol *fractol, t_vector point, t_vector *zn)
{
	int		i;
	double	tmp;
	double	sum;

	i = 0;
	sum = 0;
	while (i < fractol->max_itter && sum < 4)
	{
		tmp = point.x;
		point.x = point.x * point.x - point.y * point.y + fractol->cte_re;
		point.y = (2.0 * tmp * point.y) + fractol->cte_im;
		sum = point.x * point.x + point.y * point.y;
		i++;
	}
	*zn = ft_vector_create(point.x, point.y, 0, 0);
	return (i);
}

int	ft_burning_ship(int max, t_vector point, t_vector *zn)
{
	int		i;
	double	tmp;
	double	x;
	double	y;
	double	sum;

	x = 0;
	y = 0;
	i = 0;
	sum = 0;
	while (i < max && sum < 4)
	{
		tmp = x;
		x = x * x - y * y + point.x;
		y = fabs(2 * tmp * y) + point.y;
		sum = x * x + y * y;
		i++;
	}
	*zn = ft_vector_create(x, y, 0, 0);
	return (i);
}

int	ft_mandelbrot(int max, t_vector point, t_vector *zn)
{
	int		i;
	double	tmp;
	double	x;
	double	y;
	double	sum;

	x = 0;
	y = 0;
	i = 0;
	sum = 0;
	while (i < max && sum < 4)
	{
		tmp = x;
		x = x * x - y * y + point.x;
		y = 2 * tmp * y + point.y;
		sum = x * x + y * y;
		i++;
	}
	*zn = ft_vector_create(x, y, 0, 0);
	return (i);
}

int	ft_bird(int max, t_vector point, t_vector *zn)
{
	int		i;
	double	tmp;
	double	x;
	double	y;
	double	s[2];

	x = 0;
	y = 0;
	i = 0;
	while (i < max)
	{
		tmp = x;
		s[0] = x * x;
		s[1] = y * y;
		if (s[0] + s[1] >= 4)
			break ;
		x = (s[0] - s[1] * 3) * fabs(x) + point.x;
		y = (s[0] * 3 - s[1]) * fabs(y) + point.y;
		i++;
	}
	*zn = ft_vector_create(x, y, 0, 0);
	return (i);
}

int	ft_tribrot(int max, t_vector point, t_vector *zn)
{
	int		i;
	double	tmp;
	double	x;
	double	y;
	double	s[2];

	x = 0;
	y = 0;
	i = 0;
	while (i < max)
	{
		tmp = x;
		s[0] = x * x;
		s[1] = y * y;
		if (s[0] + s[1] >= 4)
			break ;
		x = s[0] * s[0] + s[1] * s[1] - 6 * (s[0] * s[1]) + point.x;
		y = 4 * tmp * y * (s[0] - s[1]) + point.y;
		i++;
	}
	*zn = ft_vector_create(x, y, 0, 0);
	return (i);
}
