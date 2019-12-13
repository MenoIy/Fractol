/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:05:32 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/02 18:34:43 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_vector	ft_vector_sub(t_vector vector, t_vector to_sub)
{
	t_vector res;

	res.x = vector.x - to_sub.x;
	res.y = vector.y - to_sub.y;
	res.z = vector.z - to_sub.z;
	res.w = vector.w - to_sub.w;
	return (res);
}
