/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 09:34:34 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/02 10:38:48 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_vector	ft_vector_create(double x, double y, double z, double w)
{
	t_vector	vector;

	vector.x = x;
	vector.y = y;
	vector.z = z;
	vector.w = w;
	return (vector);
}
