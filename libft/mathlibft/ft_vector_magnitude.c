/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_magnitude.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 09:37:53 by kdaou             #+#    #+#             */
/*   Updated: 2019/07/20 09:31:22 by kdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathlibft.h"

double	ft_vector_magnitude(t_vector vector)
{
	return (sqrt(vector.x * vector.x +
				vector.y * vector.y +
				vector.z * vector.z +
				vector.w * vector.w));
}
