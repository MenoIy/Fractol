/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 09:57:33 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/02 10:38:25 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

t_vector	ft_vector_add(t_vector vector, t_vector to_add)
{
	t_vector res;

	res.x = vector.x + to_add.x;
	res.y = vector.y + to_add.y;
	res.z = vector.z + to_add.z;
	res.w = vector.w + to_add.w;
	return (res);
}
