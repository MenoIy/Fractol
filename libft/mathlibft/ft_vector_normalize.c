/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_normalize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 09:48:03 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:31:41 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_vector	ft_vector_normalize(t_vector vector)
{
	t_vector	normal;
	double		t;

	t = 1 / (ft_vector_magnitude(vector));
	normal = ft_vector_scalarprod(vector, t);
	return (normal);
}
