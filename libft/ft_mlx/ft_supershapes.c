/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_supershapes_3d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 01:25:59 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:37:54 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

double		ft_supershap_3d(t_shap value, double angle)
{
	double ret;

	ret = pow(pow(1 / value.a * cos(value.m * angle / 4), value.n2) +
			pow(1 / value.b * sin(value.m * angle / 4), value.n3),
			-1 / value.n1);
	return (ret);
}

t_vector	ft_supershap_2d(t_shap value, double angle)
{
	double	r;
	double	t1;
	double	t2;

	t1 = pow(fabs(cos(value.m * angle / 4) / value.a), value.n2);
	t2 = pow(fabs(sin(value.m * angle / 4) / value.b), value.n3);
	r = pow(t1 + t2, 1 / value.n1);
	if (fabs(r) == 0)
		return (ft_vector_create(0, 0, 0, 0));
	else
	{
		r = 1 / r;
		return (ft_vector_create(r * cos(angle), r * sin(angle), 0, 0));
	}
}
