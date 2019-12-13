/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_crossprod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 15:30:20 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/02 18:32:08 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_vector			ft_vector_crossprod(t_vector a, t_vector b)
{
	t_vector new;

	new = ft_vector_create(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z,
			a.x * b.y - a.y * b.x, 0);
	return (new);
}
