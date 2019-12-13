/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractol_itteration2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 09:21:39 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:12:46 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_julia2(t_fractol *fractol, t_vector point, t_vector *zn)
{
	int		i;
	double	s[2];

	i = 0;
	while (i < fractol->max_itter)
	{
		s[0] = point.x * point.x;
		s[1] = point.y * point.y;
		if (s[0] + s[1] >= 4)
			break ;
		point.x = s[0] * point.x - 3 * point.x * s[1] + fractol->cte_re;
		point.y = 3 * s[0] * point.y - s[1] * point.y + fractol->cte_im;
		i++;
	}
	*zn = ft_vector_create(point.x, point.y, 0, 0);
	return (i);
}

int	ft_tricorn(int max, t_vector point, t_vector *zn)
{
	int		i;
	double	s[2];
	double	x;
	double	y;
	double	tmp;

	i = 0;
	x = point.x;
	y = point.y;
	while (i < max)
	{
		tmp = x;
		s[0] = x * x;
		s[1] = y * y;
		if (s[0] + s[1] >= 4)
			break ;
		x = s[0] - s[1] + point.x;
		y = -2.0 * y * tmp + point.y;
		i++;
	}
	*zn = ft_vector_create(x, y, 0, 0);
	return (i);
}

int	ft_cubic_mandelbar(int max, t_vector point, t_vector *zn)
{
	int		i;
	double	s[2];
	double	x;
	double	y;

	i = 0;
	x = 0;
	y = 0;
	while (i < max)
	{
		s[0] = x * x;
		s[1] = y * y;
		if (s[0] + s[1] >= 4)
			break ;
		x = -(s[0] - (s[1] * 3.0)) * x + point.x;
		y = (s[0] * 3.0 - s[1]) * y + point.y;
		i++;
	}
	*zn = ft_vector_create(x, y, 0, 0);
	return (i);
}

int	ft_celtic_buffalo(int max, t_vector point, t_vector *zn)
{
	int		i;
	double	s[2];
	double	x;
	double	y;

	i = 0;
	x = 0;
	y = 0;
	while (i < max)
	{
		s[0] = x * x;
		s[1] = y * y;
		if (s[0] + s[1] >= 4)
			break ;
		x = fabs((s[0] - (s[1] * 3.0)) * x) + point.x;
		y = (s[0] * 3.0 - s[1]) * y + point.y;
		i++;
	}
	*zn = ft_vector_create(x, y, 0, 0);
	return (i);
}

int	ft_inverted_mandel(int max, t_vector point, t_vector *zn)
{
	int		i;
	double	s[2];
	double	x;
	double	y;
	double	dom;

	i = 0;
	x = 0;
	y = 0;
	dom = point.x * point.x + point.y * point.y;
	point.x = point.x / dom;
	point.y = point.y / dom;
	while (i < max)
	{
		s[0] = x * x;
		s[1] = y * y;
		if (s[0] + s[1] >= 4)
			break ;
		y = 2 * x * y + point.y;
		x = s[0] - s[1] + point.x;
		i++;
	}
	*zn = ft_vector_create(x, y, 0, 0);
	return (i);
}
