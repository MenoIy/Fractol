/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 09:36:26 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/02 10:40:42 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_vector	ft_vector_copy(t_vector vector)
{
	t_vector	copy;

	copy.x = vector.x;
	copy.y = vector.y;
	copy.z = vector.z;
	copy.w = vector.w;
	return (copy);
}
